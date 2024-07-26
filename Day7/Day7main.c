#include <stdio.h>
#include <stdlib.h>
#include "Day7ins.c"
#include "day7.h"

int main()
{

   int size=0;
   scanf("%d",&size);
   int *arr;
   allot_memory(arr,size);

   add_elements(arr,size);
   printf("%d\n",sum(arr,size));

   int max,min;

   max_min(arr,size,&max,&min);
   printf("%d %d\n",max,min);

   

  

  


}