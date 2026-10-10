// Requirement:
// Write a C program to toggle n consecutive bits of an integer
// starting from a given bit position.

// Constraints:
// 1. Accept an integer, starting bit position, and number of bits n.
// 2. Use bitwise operators to toggle the specified bits.
// 3. Toggle 0 to 1 and 1 to 0.
// 4. Keep all other bits unchanged.
// 5. Use loops, bitwise operators, and assignment operators.
// 6. Display the number after toggling the bits.

// Design:
// List of variables: num, pos, n, i

// Steps:
// 1. Ask the user to enter an integer.
// 2. Read the integer into num.
// 3. Ask the user to enter the starting bit position.
// 4. Read the position into pos.
// 5. Ask the user to enter the number of bits to toggle.
// 6. Read the number of bits into n.
// 7. Use a loop to toggle n consecutive bits starting from pos.
// 8. In each iteration, create a bit mask using 1 shifted left by pos + i.
// 9. Toggle the selected bit using the XOR (^) operator.
// 10. Display the resulting integer.

#include <stdio.h>

int main()
{
    unsigned int num;
    int pos, n, i;

    printf("Enter an number: ");
    scanf("%u", &num);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to toggle: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        num ^= (1U << (pos + i));
    }

    printf("Number after toggling bits: %u\n", num);

    return 0;
}
