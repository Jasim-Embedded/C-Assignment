// Requirement:
// Write a C program to swap n consecutive bits starting from a given bit position in two integers.

// Constraints:
// 1. Accept two integers, a starting bit position, and number of bits n.
// 2. Swap n consecutive bits at the specified position in both numbers.
// 3. Use bitwise operators, loops, and assignment operators.
// 4. Keep all other bits in both numbers unchanged.
// 5. Display both numbers after swapping the bits.

// Design:
// List of variables: num1, num2, pos, n, i, bit1, bit2

// Steps:
// 1. Ask the user to enter the first integer.
// 2. Read the integer into num1.
// 3. Ask the user to enter the second integer.
// 4. Read the integer into num2.
// 5. Ask the user to enter the starting bit position.
// 6. Read the position into pos.
// 7. Ask the user to enter the number of bits to swap.
// 8. Read the number of bits into n.
// 9. Use a for loop to process n consecutive bits starting from pos.
// 10. Extract the bit from num1 using right shift (>>) and bitwise AND (&).
// 11. Extract the corresponding bit from num2 using right shift (>>) and bitwise AND (&).
// 12. Check whether the two bits are different.
// 13. If they are different, toggle both bits using XOR (^) and assignment operator (^=).
// 14. Repeat the process for all n bits.
// 15. Display both numbers after swapping.

#include <stdio.h>

int main()
{
    unsigned int num1, num2;
    int pos, n, i;
    unsigned int bit1, bit2;

    printf("Enter first number: ");
    scanf("%u", &num1);

    printf("Enter second number: ");
    scanf("%u", &num2);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to swap: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        bit1 = (num1 >> (pos + i)) & 1U;
        bit2 = (num2 >> (pos + i)) & 1U;

        if (bit1 != bit2)
        {
            num1 ^= (1U << (pos + i));
            num2 ^= (1U << (pos + i));
        }
    }

    printf("First number after swapping: %u\n", num1);
    printf("Second number after swapping: %u\n", num2);

    return 0;
}

