// Requirement:
// Write a C program to check whether a number is prime or not.

// Constraints:
// 1. The program must handle integers less than 2.
// 2. Use a loop to check divisors.
// 3. Use if-else statements to display the result.
// 4. Write the logic inside main().

// Design:
// List of variables: num, i, isPrime

// Steps:
// 1. Ask the user to enter an integer.
// 2. Read the integer into num.
// 3. If num is less than 2, it is not prime.
// 4. Otherwise, use a loop to check divisors from 2 to num / 2.
// 5. If num is divisible by any i, set isPrime to 0.
// 6. If no divisors are found, the number is prime.
// 7. Display whether the number is prime or not.

#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 2)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
