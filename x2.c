#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int *arr = (int*) malloc(sizeof(int)*(argc-1));
  int sum=0;
  for(int i = 0; i < argc-1; i++)
  {
    arr[i] = atoi(argv[i+1]);
    if(arr[i] %2 == 1){
      printf("%d ", arr[i]);
      sum+=arr[i];
    }
  }
  printf("\n%d", sum);
}