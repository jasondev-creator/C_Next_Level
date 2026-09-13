/*
 * Program: Displaying Different Types of Data
 *
 * Concepts:
 * - Character/string variable
 * - Integer variable
 * - Float variable
 * - Variable declaration and initialization
 * - printf() function
 * - Format specifiers: %s, %d, %f
 *
 * Explanation:
 * 1. A character array is used to store the name "jason".
 * 2. %s is used to display the string stored in the name variable.
 * 3. An integer variable 'age' stores the value 18.
 * 4. %d is used to display the integer value.
 * 5. A float variable 'height' stores a decimal value.
 * 6. %f is used to display the floating-point value.
 * 7. Each variable is displayed using printf().
 *
 * Key Learning:
 * Different types of data require different variables
 * and corresponding format specifiers when using printf().
 */
#include <stdio.h>
int main () {
char name [ ] = "jason";
printf("%s\n",name);
int age = 18;
printf("my age is %d\n",age);
float height = 6.2;
printf("%f\n",height);
return 0;
}