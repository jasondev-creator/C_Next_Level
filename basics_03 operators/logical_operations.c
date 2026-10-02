/*
   Logical operators are used to combine
   multiple conditions.
   
   && = AND
   Both conditions must be true.
   
   || = OR
   At least one condition must be true.
   
   ! = NOT
   Reverses the condition.
*/
#include <stdio.h>
int main () {
int age;
int marks;
printf("Enter your age:");
scanf("%d",&age);
printf("Enter your marks:");
scanf("%d",&marks);
if (age >=18 && marks >= 75)
{
printf("%d\n ADMISSION DONE");
}
else {
printf("%d\n ADMISSION NOT DONE");
}
return 0;
}