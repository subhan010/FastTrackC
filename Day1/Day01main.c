#include <stdio.h>
#include "Day01.c"
#include "day1.h"
#include <assert.h>
int main()
{

    assert(upperToLower('A')=='a');
    assert(area_of_circle(3)==28.26);
    assert(character_difference('A','E')==4);
    assert(celsius_to_farenheit(34)==93.20);
    assert(even_or_odd(5)=="Odd");
    assert(is_leap_year(2000)==1);
    assert(power_using_left_shift(3)==8);

      //printf("%s",even_or_odd(5));
      //float ans=area_of_circle(3);
      //printf("%f\n",ans);
      //printf("%d\n",characterDifference('A','G'));
     //double ans1=celsius_to_farenheit(34);
     //printf("%.2f\n",ans1);
     //float ans3=randomi();
     //printf("%f\n",ans3);
     //int ans4=power_using_left_shift(3);
     //printf("%d",ans4);
    return 0;
}