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
