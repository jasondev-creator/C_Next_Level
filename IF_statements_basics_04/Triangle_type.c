#include <stdio.h>
#include <conio.h>
void main () {
int side1,side2,side3;
printf("Enter the three sides of triangle you need:\n");
scanf("%d %d %d",&side1,&side2,&side3);
if(side1==side2&& side2 ==side3 && side1==side3)
{
printf("Equilateral Triangle.\n");
}
else if(side1 == side2 ||side2 == side3|| side1 == side3)
{
printf("Isosceles Triangle.\n");
}
else
{
printf("Scalene Triangle.\n");
}
}
