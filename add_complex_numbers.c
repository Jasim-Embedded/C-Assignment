// Requirement:
// Write a C program using a structure to represent two complex numbers and calculate their sum.

// Constraints:
// 1. Define a structure named Complex with real and imaginary parts.
// 2. Accept two complex numbers from the user.
// 3. Add the real parts and imaginary parts separately.
// 4. Use a function to display the result.
// 5. Display the result in the format a + bi or a - bi.

// Design:
// List of variables: Complex, num1, num2, result, num
// Function name: displayComplex()

// Steps:
// 1. Define a structure named Complex with real and imaginary members.
// 2. Define the displayComplex() function to display a complex number.
// 3. Get the real and imaginary parts of the first complex number.
// 4. Get the real and imaginary parts of the second complex number.
// 5. Add the real parts of both numbers and store the result.real.
// 6. Add the imaginary parts of both numbers and store the result.imaginary.
// 7. Call displayComplex() to display the sum.
// 8. Stop the program.

#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

void displayComplex(struct Complex num)
{
    if (num.imaginary >= 0)
    {
        printf("%.2f + %.2fi\n", num.real, num.imaginary);
    }
    else
    {
        printf("%.2f - %.2fi\n", num.real, -num.imaginary);
    }
}

int main()
{
    struct Complex num1, num2, result;

    printf("Enter the real and imaginary parts of 1st number: ");
    scanf("%f %f", &num1.real, &num1.imaginary);

    printf("Enter the real and imaginary parts 2nd number : ");
    scanf("%f %f", &num2.real, &num2.imaginary);

    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;

    printf("Sum of complex numbers: ");
    displayComplex(result);

    return 0;
}

