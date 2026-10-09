// Question 06: GCD using Recursion
// Requirement:
// Write a C program that uses a recursive function to find the GCD of two numbers using the Euclidean algorithm.
// Constraints:
// ● The function must be recursive.
// ● The GCD is returned to main and displayed there.
// Design:
// List of variables: a, b
// Requirement:
// Write a C program to find the GCD of two numbers using recursion.

// Constraints:
// 1. The program should accept two positive integers.
// 2. Use a recursive function.
// 3. Use the Euclidean algorithm and modulus (%) operator.
// 4. Return the GCD to the main function and display the result.

// Design:
// List of variables: num1, num2

// Steps:
// 1. Ask the user to enter two positive integers.
// 2. Read the numbers into num1 and num2.
// 3. Call the recursive function gcd() with num1 and num2.
// 4. If the second number is 0, return the first number.
// 5. Otherwise, call gcd() with num2 and num1 % num2.
// 6. Repeat until the second number becomes 0.
// 7. Display the GCD in main().


#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    int a, b, result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("Please enter positive integers.\n");
    }
    else
    {
        result = gcd(a, b);
        printf("GCD of %d and %d is %d.\n", a, b, result);
    }

    return 0;
}
