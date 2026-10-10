// Requirement:
// Write a C program to extract n bits starting from a specific bit position.

// Constraints:
// 1. Accept an integer, starting bit position, and number of bits to extract.
// 2. Use bitwise operators to extract the specified bits.
// 3. Ignore all other bits in the original number.
// 4. Display the extracted bits as an integer.

// Design:
// List of variables: num, pos, n, result, mask

// Steps:
// 1. Ask the user to enter an integer.
// 2. Read the integer into num.
// 3. Ask the user to enter the starting bit position.
// 4. Read the position into pos.
// 5. Ask the user to enter the number of bits to extract.
// 6. Read the number of bits into n.
// 7. Right-shift num by pos positions.
// 8. Create a mask using (1U << n) - 1.
// 9. Use the bitwise AND (&) operator to extract the required bits.
// 10. Store the extracted value in result.
// 11. Display the extracted value.

#include <stdio.h>

int main()
{
    unsigned int num, result, mask;
    int pos, n;

    printf("Enter an number: ");
    scanf("%u", &num);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to extract: ");
    scanf("%d", &n);

    mask = (1U << n) - 1;
    result = (num >> pos) & mask;

    printf("Extracted bits: %u\n", result);

    return 0;
}

