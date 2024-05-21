#include <iostream>
#include <random>
#include <cmath>
#include <iomanip>
#include <functional>
#include "mpi_revised.h"
// Function to be integrated
double targetFunction(double x) {
  return sin(x);
}
/**
 * @brief Performs Monte Carlo integration on a given function.
 *
 * This function calculates the integral of a function using the Monte Carlo method. 
 * It divides the work among multiple processes using MPI.
 *
 * @param func The function to be integrated.
 * @param lowerLimit The lower limit of integration.
 * @param upperLimit The upper limit of integration.
 * @param numSamples The total number of samples to use across all processes.
 * @param rank The rank of the current process.
 * @param size The total number of processes.
 *
 * @return The calculated integral value.
 */
double monteCarloIntegration(const std::function<double(double)>& func, 
                            double lowerLimit, 
                            double upperLimit, 
                            int numSamples, 
                            int rank, 
                            int size) {
  // Initialize random number generator with rank to ensure different sequences on each process
  std::random_device rd;
  std::mt19937 gen(rd() + rank);
  std::uniform_real_distribution<double> dis(lowerLimit, upperLimit);
  // Calculate sum of function values
  double integralSum = 0.0;
  for (int i = 0; i < numSamples; ++i) {
    integralSum += func(dis(gen));
  }
  return integralSum;
}
int main(int argc, char* argv[]) {
  double lowerLimit {0.0}, upperLimit {0.0};
  int numSamples {0};
  MPI_Init(&argc, &argv);
  int rank, size;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  if (rank == 0) {
    std::cout << std::fixed << std::setprecision(5);
    // Get integration limits from user
    std::cout << "Enter the lower limit: ";
    std::cin >> lowerLimit;
    std::cout << "Enter the upper limit: ";
    std::cin >> upperLimit;
    // Get number of samples from user
    std::cout << "Enter the number of samples: ";
    std::cin >> numSamples;
    // Validate input
    if (lowerLimit >= upperLimit) {
      std::cerr << "Error: Lower limit must be less than the upper limit." << std::endl;
      MPI_Finalize();
      return 1;
    }
    // Broadcast the limits and number of samples to all processes
    MPI_Bcast(&lowerLimit, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    MPI_Bcast(&upperLimit, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    MPI_Bcast(&numSamples, 1, MPI_INT, 0, MPI_COMM_WORLD);
  } else {
    MPI_Bcast(&lowerLimit, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    MPI_Bcast(&upperLimit, 1, MPI_DOUBLE, 0, MPI_COMM_WORLD);
    MPI_Bcast(&numSamples, 1, MPI_INT, 0, MPI_COMM_WORLD);
  }
  // Divide the work among processes
  int local_numSamples = numSamples / size;
  if (rank < numSamples % size) {
    ++local_numSamples;
  }
  // Perform Monte Carlo integration on each process
  double local_result = monteCarloIntegration(targetFunction, lowerLimit, upperLimit, local_numSamples, rank, size);
  // Reduce the local results to the final result on the master process
  double result = 0.0;
  MPI_Reduce(&local_result, &result, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);
  if (rank == 0) {
    // Apply the Monte Carlo integration formula
    result = (upperLimit - lowerLimit) * result / numSamples;
    // Output result
    std::cout << "The value calculated by Monte Carlo integration is: " << result << std::endl;
  }
  MPI_Finalize();
  return 0;
}
