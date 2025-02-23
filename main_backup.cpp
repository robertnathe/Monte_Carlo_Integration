// constexpr double PI = 3.14159265358979323846; 
#include <iostream>
#include <random>
#include <cmath>
#include <iomanip>
#include <functional>
#include <mpi.h>

// Function to be integrated
double targetFunction(double x) {
    return std::sin(x);
}

// Monte Carlo integration function (local to each process)
double monteCarloIntegration(const std::function<double(double)>& func, double lowerLimit, double upperLimit, int localNumSamples, int rank) {
    // Seed the random number generator with rank to ensure different streams on each process
    static thread_local std::mt19937 gen{static_cast<unsigned int>(rank)};
    std::uniform_real_distribution<double> dis(lowerLimit, upperLimit);
    double integralSum = 0.0;
    // Process samples in blocks to improve cache efficiency
    constexpr int BLOCK_SIZE = 1024;
    int numBlocks = localNumSamples / BLOCK_SIZE;
    int remainingSamples = localNumSamples % BLOCK_SIZE;
    // Process full blocks
    for (int b = 0; b < numBlocks; ++b) {
        double blockSum = 0.0;
        for (int i = 0; i < BLOCK_SIZE; ++i) {
            blockSum += func(dis(gen));
        }
        integralSum += blockSum;
    }
    // Process remaining samples
    for (int i = 0; i < remainingSamples; ++i) {
        integralSum += func(dis(gen));
    }
    return integralSum;
}

int main(int argc, char* argv[]) {
    double lowerLimit, upperLimit;
    int numSamples;
    MPI_Init(&argc, &argv);
    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    if (rank == 0) {
        std::cout << std::fixed << std::setprecision(5);
        std::cout << "Enter the lower limit: ";
        std::cin >> lowerLimit;
        std::cout << "Enter the upper limit: ";
        std::cin >> upperLimit;
        std::cout << "Enter the number of samples: ";
        std::cin >> numSamples;
        if (lowerLimit >= upperLimit) {
            std::cerr << "Error: Lower limit must be less than the upper limit." << std::endl;
            MPI_Abort(MPI_COMM_WORLD, 1); // Use MPI_Abort for collective termination on error
            MPI_Finalize();
            return 1;
        }
    }
    // Broadcast input parameters from rank 0 to all other processes
    MPI_Bcast(&lowerLimit, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    MPI_Bcast(&upperLimit, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    MPI_Bcast(&numSamples, 1, MPI_INT, 0, MPI_COMM_WORLD);
    // Calculate the number of samples for each process, distributing remainder samples
    int localNumSamples = numSamples / size;
    int remainder = numSamples % size;
    if (rank < remainder) {
        ++localNumSamples; // Distribute remaining samples among initial ranks
    }
    // Perform Monte Carlo integration locally on each process
    double localResultSum = monteCarloIntegration(targetFunction, lowerLimit, upperLimit, localNumSamples, rank);
    double globalResultSum = 0.0;
    // Reduce the sum of integrals from all processes to rank 0
    MPI_Reduce(&localResultSum, &globalResultSum, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
    if (rank == 0) {
        // Calculate the final result by averaging the sum over the total number of samples and scaling by the integration range
        double integrationRange = upperLimit - lowerLimit;
        double result = integrationRange * globalResultSum / numSamples;
        std::cout << "The value calculated by Monte Carlo integration is: " << result << std::endl;
    }
    MPI_Finalize();
    return 0;
}
