CC = mpic++
CFLAGS = -Wall -I /usr/lib/x86_64-linux-gnu/
 
# ****************************************************ru
# Targets needed to bring the executable up to date
 
output: main.o
	$(CC) $(CFLAGS) -o output main.o
 
# The main.o target can be written more simply
 
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm *.o

run:
	export OMP_NUM_THREADS=2
	mpirun -np 2 ./output
