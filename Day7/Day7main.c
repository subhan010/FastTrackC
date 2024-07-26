#include <stdio.h>
#include <stdlib.h>
#include "Day7ins.c"
#include "day7.h"

int main()
{

   int size=0;
   scanf("%d",&size);
   
   int *arr = (int *)malloc(size * sizeof(int));
  
  for(int i=0;i<size;i++)
  {
    printf("%d\n",arr[i]);
  }



}