/*
   Electricity Bill Calculator

   Takes the number of electricity units consumed
   and calculates the bill according to the unit range.

   1 - 100 units  = Rs 2 per unit
   101 - 200 units = Rs 3 per unit
   Above 200 units = Rs 5 per unit

   Concepts Used:
   - float variables
   - scanf()
   - if / else if / else
   - Logical AND (&&)
   - Comparison operators
*/
#include <stdio.h>
int main () {
float units_consumed,rate;
printf("Enter the number of electricity consumed:");
scanf("%f",&units_consumed);
if(units_consumed >0 && units_consumed <= 100)
{
rate = (2 * units_consumed);
printf("%.2f\n",rate);
printf("RS 2 per unit");
}
else if(units_consumed >= 101 && units_consumed <= 200)
{
rate = (3 * units_consumed);
printf("%.2f\n",rate);
printf("RS 3 per unit");
}
else
{
rate = (5 * units_consumed);
printf("%.2f\n",rate);
printf("RS 5 per unit");
return 0;
}
}
