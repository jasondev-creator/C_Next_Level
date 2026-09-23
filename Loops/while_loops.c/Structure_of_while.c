/*
    Program: Print numbers from 0 to n using a while loop

    Input:
    An integer value n.

    Process:
    Initialize i = 0.
    Repeat the loop while i <= n.
    Print i and increment i by 1.

    Output:
    Numbers from 0 to n.
*/

#include <stdio.h>
int main()
{
    int n, i = 0;       // Declare n and initialize loop counter i to 0

    scanf("%d", &n);    // Read the upper limit from the user

    while (i <= n)      // Continue the loop while i is less than or equal to n
    {
        printf("%d\n", i);  // Print the current value of i
        i++;                // Increase i by 1
    }

    return 0;           // End the program successfully
}