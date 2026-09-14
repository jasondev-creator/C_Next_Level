/*
 * Program: Arithmetic Operations on Two Numbers
 *
 * Concepts:
 * - Integer variables
 * - scanf() and printf()
 * - Arithmetic operators
 * - Addition (+)
 * - Subtraction (-)
 * - Multiplication (*)
 * - Division (/)
 * - Modulus (%)
 *
 * Approach:
 * 1. Declare two integer variables.
 * 2. Take two numbers as input from the user.
 * 3. Perform addition, subtraction, multiplication,
 *    division, and remainder operations.
 * 4. Display the result of each operation.
 *
 * Note:
 * - Integer division gives only the whole-number part.
 * - The modulus operator (%) gives the remainder.
 */
#include <stdio.h>
int main ()
{
int a,b;
int sum,sub,product,divide,remainder;
printf("Enter the number of values for a ,b:");
scanf("%d %d ",&a,&b);
sum = a + b;
printf("Sum:%d\n",sum);
sub = a - b;
printf("sub:%d\n",sub);
product = a * b;
printf("product:%d\n",product);
divide = a / b;
printf("divide:%d\n",divide);
remainder = a % b;
printf("remiander:%d\n",remainder );
return 0;
}

