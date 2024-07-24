#include <stdio.h>
#include <string.h>
#include <math.h>

int bin_to_dec(long num)
{
    int ans=0;
    double count=0;
    while(num>0)
    {
        double temp=pow(2,0);
        ans=ans+ (temp)*(ans%num);
        num=num/10;
        count++;
    }
    return ans;
}

int power_by_recurssion(int base,int exponent)
{
    if(exponent>0)
    {
        
        return base*power_by_recurssion(base,exponent-1);
    }
    //printf("%d\n",exponent);
   // printf("%d\n",base);
   else
   {
     return 1;
   }
   
    
 
}

int factorial_using_recursion(int n)
{

   if(n>1)
   {
    return n*factorial_using_recursion(n-1);
   }
   else
   {
       return 1;
   }
}