#include <stdio.h>
int main () {
int leap_year;
printf("Enter the year:\n");
scanf("%d",&leap_year);
if(leap_year % 4 == 0 || leap_year %400 == 0 &&leap_year % 100 != 0)
{
printf("Leap year.\n");
}
else
{
printf("Normal year.\n");
}
return 0;
}
