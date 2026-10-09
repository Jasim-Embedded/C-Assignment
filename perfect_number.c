// Requirement:
// Write a C program using a function to check whether a number is perfect.

// Constraints:
// 1. The program should accept a positive integer.
// 2. Use a separate function to check the perfect number.
// 3. Calculate the sum of proper divisors, excluding the number itself.
// 4. Return whether the sum equals the original number.
// 5. Display the result in main().

// Design:
// List of variables: num, i, sum

// Steps:
// 1. Ask the user to enter a positive integer.
// 2. Read the number into num.
// 3. Call the function isPerfect() with num.
// 4. Inside the function, initialize sum to 0.
// 5. Use a loop to find the proper divisors of num.
// 6. Add each divisor to sum.
// 7. If sum equals num, return 1; otherwise, return 0.
// 8. Display whether the number is perfect or not in main().

// Program:


#include <stdio.h>

int isPerfect(int num)
{
    int i, sum = 0;

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num > 0 && isPerfect(num))
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
