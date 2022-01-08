#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int isPrime(int n)
{
  if (n <= 1) return 0;
  for(int i = 2; i <= n/2; i++)
  {
    if(n % i != 0)
      continue;
    else
      return 0;
  }
  return 1;
}

int main(int argc, char *argv[])
{
  int *arr = (int*) malloc((argc-1) * sizeof(int));
  // test_case = {1, 15, 19, 7, 22, 65, 98, 97, 121, 151, 132, 172, 2, 3};
  for(int i = 0; i < argc-1; i++)
    if(isPrime(atoi(argv[i+1])))
      arr[i] = atoi(argv[i+1]);
  int min = INT_MAX, max = INT_MIN;
  for(int i = 0; i < argc-1; i++)
  {
    if (arr[i] != 0) {
      if (min > arr[i])
        min = arr[i];
      else if (max < arr[i])
        max = arr[i];
    }
  }
  printf("min-prime: %d\nmax-prime: %d\n",min, max);
}

