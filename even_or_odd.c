// Requirement:
// Write a C program to check whether a number is even or odd

// Constraints:
// 1. Handle positive and negative integers.
// 2. Use the modulus (%) operator.
// 3. Use if-else statements.

// Design:
// List of variables: num

// Steps:
// 1. Ask the user to enter an integer.
// 2. Read the integer into num.
// 3. Check whether num % 2 == 0.
// 4. If true, display that the number is even.
// 5. Otherwise, display that the number is odd.

#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even.\n", num);
    }
    else
    {
        printf("%d is odd.\n", num);
    }

    return 0;
}
