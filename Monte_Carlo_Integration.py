# Usage: mpirun -np 2 python Monte_Carlo_Integration.py
# PI = 3.14159265358979323846
import mpi4py.MPI as MPI
import numpy as np
import sys

def target_function(x):
    """Define the function to integrate (e.g., sin(x))."""
    return np.sin(x)

def monte_carlo_integration(func, lower, upper, num_samples, rank, chunk_size=10000):
    """
    Perform Monte Carlo integration over [lower, upper] with num_samples points.
    Uses chunked processing to reduce memory usage.
    
    Args:
        func: Target function to integrate.
        lower: Lower integration limit.
        upper: Upper integration limit.
        num_samples: Number of samples for this process.
        rank: MPI process rank (used as seed for RNG).
        chunk_size: Number of points to process per chunk (default: 10,000).
    
    Returns:
        Sum of function values over random points.
    """
    rng = np.random.RandomState(seed=rank)  # Unique seed per process
    total_sum = 0.0
    for i in range(0, num_samples, chunk_size):
        current_chunk_size = min(chunk_size, num_samples - i)
        points = rng.uniform(lower, upper, current_chunk_size)
        values = func(points)
        total_sum += np.sum(values)
    return total_sum

def main():
    # Set up MPI communicator
    comm = MPI.COMM_WORLD
    rank = comm.Get_rank()
    size = comm.Get_size()

    # Initialize variables (only rank 0 will update these initially)
    lower_limit = 0.0
    upper_limit = 0.0
    num_samples = 0  # Total number of samples (integer)

    # Get user input on rank 0
    if rank == 0:
        try:
            lower_limit = float(input("Enter the lower limit: "))
            upper_limit = float(input("Enter the upper limit: "))
            num_samples = int(input("Enter the number of samples: "))
            
            if lower_limit >= upper_limit:
                print("Error: Lower limit must be less than upper limit.", file=sys.stderr)
                comm.Abort(1)
            if num_samples <= 0:
                print("Error: Number of samples must be positive.", file=sys.stderr)
                comm.Abort(1)
        except ValueError:
            print("Invalid input. Please enter numerical values.", file=sys.stderr)
            comm.Abort(1)

    # Broadcast limits and number of samples to all processes
    limits = np.array([lower_limit, upper_limit])
    comm.Bcast(limits, root=0)
    lower_limit, upper_limit = limits
    num_samples = comm.bcast(num_samples, root=0)

    # Calculate stratum boundaries for each process
    stride = (upper_limit - lower_limit) / size
    stratum_lower = lower_limit + rank * stride
    stratum_upper = lower_limit + (rank + 1) * stride if rank < size - 1 else upper_limit

    # Distribute samples across processes
    base_samples = num_samples // size
    extra_samples = num_samples % size
    local_num_samples = base_samples + (1 if rank < extra_samples else 0)

    # Compute local contribution to the integral within the stratum
    local_result = monte_carlo_integration(
        target_function, stratum_lower, stratum_upper, local_num_samples, rank
    )

    # Reduce local results to global sum on rank 0
    global_result = comm.reduce(local_result, op=MPI.SUM, root=0)

    # Compute and display the final result on rank 0
    if rank == 0:
        integration_range = upper_limit - lower_limit
        result = integration_range * global_result / num_samples
        print(f"The value calculated by Monte Carlo integration is: {result:.5f}")

if __name__ == "__main__":
    main()
