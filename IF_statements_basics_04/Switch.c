/*C Program: Simple Calculator Using Switch Statement*/

#include <stdio.h>

int main()
{
    float a, b, result;
    char oper;

    // Get two numbers from the user
    printf("Enter two numbers (a and b):\n");
    scanf("%f %f", &a, &b);

    // Get the operator from the user
    printf("Enter an operator (+, -, *, /):\n");
    scanf(" %c", &oper);

    // Check which operator the user entered
    switch (oper)
    {
        case '+':
            // Add the two numbers
            result = a + b;
            printf("Sum: %.2f\n", result);
            break;

        case '-':
            // Subtract b from a
            result = a - b;
            printf("Difference: %.2f\n", result);
            break;

        case '*':
            // Multiply the two numbers
            result = a * b;
            printf("Product: %.2f\n", result);
            break;

        case '/':
            // Check if division by zero is attempted
            if (b == 0)
            {
                printf("Cannot divide by zero!\n");
            }
            else
            {
                // Divide a by b
                result = a / b;
                printf("Division: %.2f\n", result);
            }
            break;

        default:
            // Runs if the operator is invalid
            printf("Invalid operator!\n");
    }

    return 0;
}

/*Basics Used in This Program

- "switch": Selects which operation to perform based on the operator.
- "case": Defines a possible value of the operator.
- "break": Stops execution from continuing into the next case.
- "default": Runs when none of the cases match.
- "if-else": Checks whether division by zero is being attempted.
- "//": Adds a single-line comment to explain the code.
- "%.2f": Displays a floating-point number with two decimal places*/