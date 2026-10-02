/*
   Forward and Backward Loops

   Demonstrates how a for loop can run
   in both forward and backward directions.

   Forward loop:
   Starts from 1 and increases up to 5.

   Backward loop:
   Starts from 5 and decreases down to 1.

   Concepts Used:
   - for loop
   - Loop initialization
   - Loop condition
   - Increment (++)
   - Decrement (--)
*/
#include <stdio.h>
int main() {
// Forward loop
printf("Forward loop \n");
for(int i = 1; i <= 5; i++)
{
printf("%d\n",i);
}
printf("\n");

//Backward Loop
printf("Backward loop \n");
for( int i = 5; i >=1; i--)
{
printf("%d\n",i);
}
printf("\n");
return 0;
}