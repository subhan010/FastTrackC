#include <stdio.h>
#include <string.h>

char upperToLower(char temp)
{
    
 int t=temp+32;
  return t;
    
}

float calculate(int radius)
{

float ans=radius*radius*(3.14);
return ans;

}


int characterDifference(char start, char end)
{
    int ans=end-start;
    
    return ans;
}

float celsiusToFarenheit(float celsius)
{
  float ctof=(1.8*celsius)+32;

  return ctof;

}

int evenOrOdd(int num)
{
if(num==1 || num/2==1)
{
    return 1;
}
else
{
    return 0;
}

}

int isLeapYear(int num)
{
   if((num%4==0 && num%100==0)||num%400==0)
   {
    return 1;
   }
   else
   {
    return 0;
   }
}



void intOrChar(int)
{ 
   
}

int randomi()
{  
    int ra1=rand();
    int ra2=rand();
    int sum=ra1+ra2;

    return sum;
}
int power_using_left_shift(int n)
{
    int ans=1<<n;
    return ans;
}