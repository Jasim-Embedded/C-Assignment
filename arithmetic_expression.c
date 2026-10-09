// Requirement:
// Write a C program to perform arithmetic operations
// (addition, subtraction, multiplication, and division)
// using separate functions.

// Constraints:
// 1. Accept two numbers from the user.
// 2. Accept an operator (+, -, *, /).
// 3. Use separate functions for each arithmetic operation.
// 4. Use a switch statement to select the operation.
// 5. Handle division by zero.
// 6. Display an error for an invalid operator.

// Design:
// List of variables: a, b, op, result, valid
// Functions: add(), subtract(), multiply(), divide(), calculate()

// Steps:
// 1. Ask the user to enter two numbers.
// 2. Read the numbers into a and b.
// 3. Ask the user to enter an arithmetic operator.
// 4. Read the operator into op.
// 5. Call the calculate() function to perform the operation.
// 6. Use a switch statement to select the appropriate function.
// 7. If division is selected, check whether b is zero.
// 8. If the operator is invalid or division by zero occurs,
//    display an error message.
// 9. Otherwise, display the calculated result.
 
#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b, int *valid)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        *valid = 0;
        return 0;
    }
    return a / b;
}

float calculate(float a, float b, char op, int *valid)
{
    *valid = 1;

    switch (op)
    {
    case '+':
        return add(a, b);
    case '-':
        return subtract(a, b);
    case '*':
        return multiply(a, b);
    case '/':
        return divide(a, b, valid);
    default:
        printf("Error: Invalid operator.\n");
        *valid = 0;
        return 0;
    }
}

int main()
{
    float a, b, result;
    char op;
    int valid;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    result = calculate(a, b, op, &valid);

    if (valid)
        printf("%.2f %c %.2f = %.2f\n", a, op, b, result);
    return 0;
}
