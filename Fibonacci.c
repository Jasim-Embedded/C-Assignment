

// Requirement:
// Write a C program to generate the Fibonacci series up to n terms.

// Constraints:
// 1. The program should accept the number of terms from the user.
// 2. Use a loop to generate the series.
// 3. The series should start with 0 and 1.
// 4. Display the Fibonacci series.

// Design:
// List of variables: n, i, first, second, next

// Steps:
// 1. Ask the user to enter the number of terms.
// 2. Read the number into n.
// 3. Initialize first = 0 and second = 1.
// 4. Use a loop to generate the series.
// 5. Display first in each iteration.
// 6. Calculate next = first + second.
// 7. Update first = second and second = next.
// 8. Repeat until n terms are displayed.

#include <stdio.h>

int main()
{
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
    }
    else
    {
        printf("Fibonacci series: ");

        for (i = 1; i <= n; i++)
        {
            printf("%d ", first);

            next = first + second;
            first = second;
            second = next;
        }

        printf("\n");
    }

    return 0;
}
