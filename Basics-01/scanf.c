/*
 * Program: Using scanf() to Take Input
 *
 * Concepts:
 * - scanf()
 * - Integer variable
 * - %d format specifier
 * - Address operator (&)
 *
 * Approach:
 * 1. Declare an integer variable.
 * 2. Ask the user to enter a number.
 * 3. Use scanf() to read the number.
 * 4. Store the input in the variable.
 * 5. Display the entered number.
 */

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("You entered: %d\n", number);

    return 0;
}