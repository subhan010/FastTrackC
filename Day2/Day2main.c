#include <stdio.h>
#include "Day02.c"
#include "day2.h"
#include <assert.h>

int main()
{

  assert(find_digit_sum(456)==15);
 //printf("%d",find_digit_sum(456));  
  assert(reverse_a_number(54638)==83645); 
  //printf("%d",reverse_a_number(9235));
  assert(occurance_of_digits(146365,6)==2);
  //printf("%d",occurance_of_digits(1223,2));
  assert(is_palindrome(1221)==1);
  //printf("%d",is_palindrome(12201));
  //generate_n_prime(5);
  //series_and_sum(4);
  //printf("%d",amstrong_number(8208));
  assert(amstrong_number(8208)==1);
  //printf("%d",poww(6,4));
 // printf("%d",amicable_numbers(1184,1210));
  assert(amicable_numbers(220,284)==1);

}