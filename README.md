# Monte Carlo Integration with MPI

This project implements a parallel Monte Carlo integration method using C++ and MPI (Message Passing Interface). The program calculates the definite integral of a given function using the Monte Carlo method, distributed across multiple processes for improved performance.
Features

  Parallel computation using MPI

  Monte Carlo integration of user-defined functions

  Dynamic load balancing for optimal resource utilization

  Configurable integration limits and number of samples

  Improved cache efficiency through block processing

Requirements

  C++ compiler with C++11 support

  MPI library (e.g., OpenMPI, MPICH)


Compile directly with MPI:

bash
mpicxx -std=c++11 -O3 main.cpp -o output

Usage

Run the program using mpirun or your MPI implementation's equivalent:

bash
mpirun -np <number_of_processes> ./output

The program will prompt for the following inputs:

  Lower limit of integration

  Upper limit of integration

  Number of samples for Monte Carlo integration

Example

bash
$ mpirun -np 2 ./output
Enter the lower limit: 0
Enter the upper limit: 3.14159265358979323846                
Enter the number of samples: 100000000
The value calculated by Monte Carlo integration is: 2.00002

Customization

To integrate a different function, modify the targetFunction in the source code:

cpp
double targetFunction(double x) {
    return std::sin(x); // Replace with your desired function
}

Performance Considerations

  The program uses block processing to improve cache efficiency.

  Random number generation is optimized for each process to ensure statistical independence.

  Load balancing is implemented to distribute samples evenly across processes.


