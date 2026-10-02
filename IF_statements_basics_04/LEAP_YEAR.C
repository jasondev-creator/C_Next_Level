/*
   Leap Year Checker

   Checks whether a given year is a leap year
   using divisibility rules.

   A leap year is divisible by 4,
   but century years must also be divisible by 400.

   Concepts Used:
   - int variables
   - Modulus operator (%)
   - Comparison operators
   - Logical OR (||)
   - Logical AND (&&)
   - if / else
*/
#include <stdio.h>
int main () {
int leap_year;
printf("Enter the year:\n");
scanf("%d",&leap_year);
if(leap_year % 4 == 0 || leap_year % 400 == 0 && leap_year % 100 != 0)
{
printf("Leap year.\n");
}
else
{
printf("Normal year.\n");
}
return 0;
}
