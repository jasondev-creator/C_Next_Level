/* FOR LOOP
   Used when we know:
   1. Where the loop should START
   2. What CONDITION should STOP the loop
   3. How the value should CHANGE (STEP)
*/

#include <stdio.h>

void main()
{
    /* FOR LOOP STRUCTURE
       
       for (start; condition; step)
       
       start     → initial value
       condition → decides whether the loop continues
       step      → changes the value after each iteration
    */

    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", i);
    }
}
