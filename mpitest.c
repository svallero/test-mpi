/* program hello */
/* Adapted from mpihello.f by drs */

#include <mpi.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  int rank;
  char hostname[256];

  MPI_Init(&argc,&argv);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  gethostname(hostname,255);

  int i =0;
  //while ( i< 100) {
     printf("Hello world!  I am process number: %d on host %s\n", rank, hostname);
     //sleep(10);
     //i++;
  //}
  MPI_Finalize();

  return 0;
}
