// Requirement:
// Write a C program to calculate the factorial of a positive integer.

// Constraints:
// 1. The program should accept a whole number greater than or equal to 0.
// 2. Use a loop to calculate the factorial.
// 3. The factorial of 0 is 1.
// 4. Display the final result.

// Design:
// List of variables: num, i, factorial

// Steps:
// 1. Ask the user to enter an integer.
// 2. Read the number into num.
// 3. Initialize factorial to 1.
// 4. Use a loop from 1 to num.
// 5. Multiply factorial by i in each iteration.
// 6. Display the factorial result.

#include <stdio.h>

int main()
{
    int num, i, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Negative Integer Not Allowed.\n");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d is %d \n", num, factorial);
    }

    return 0;
}
