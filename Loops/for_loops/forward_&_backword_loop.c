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