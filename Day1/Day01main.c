#include <stdio.h>
#include "Day01.c"
#include <assert.h>
int main()
{

    char temp='A';
   upperToLower(temp);
   assert(upperToLower(temp)=='a');
   float tempo=calculate(3);

   float ans=calculate(3);
   printf("%f\n",ans);
   printf("%d\n",characterDifference('A','G'));
   float ans1=celsiusToFarenheit(34);
   printf("%f\n",ans1);
   float ans3=randomi();
   printf("%f\n",ans3);
   int ans4=power_using_left_shift(3);
   printf("%d",ans4);
    return 0;
}