/*
 * Program: Basic Input and Output
 *
 * Concepts:
 * - printf()
 * - scanf()
 * - Integer variable
 * - %d format specifier
 * - Address operator (&)
 *
 * Approach:
 * 1. Declare an integer variable.
 * 2. Display a message using printf().
 * 3. Take an integer input using scanf().
 * 4. Store the input in the variable.
 * 5. End the program using return 0.
 */

#include <stdio.h>

int main() {
    int hi_level;

    printf("Hi:");
    scanf("%d", &hi_level);

    return 0;
}