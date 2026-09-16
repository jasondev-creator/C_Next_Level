#include <stdio.h>
int main () {
char names;
printf("Enter the names to check whtehter their in uppwecase,lowercase,numbers and special characters:\n");
scanf("%s",&names);
if(names >= 'A' && names <= 'Z')
{
printf("\nUPPER CASE");
}
else if (names>= 'a' && names <= 'z')
{
printf("\nLOWER CASE");
}
else if(names >= '0'&& names <='9')
{
printf("\nNUMBERS");
}
else
{
printf("\nSPECIAL SYMBOLS(@,!,$,^)");
}
return 0;
}
