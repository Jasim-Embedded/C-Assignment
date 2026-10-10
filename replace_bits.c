// Requirement:
// Write a C program to replace n bits of the first number,starting from a given bit position, with n bits from a second number.

// Constraints:
// 1. Accept two integers, a starting bit position, and number of bits n.
// 2. Clear n bits in the first number at the specified position.
// 3. Replace those bits with n bits from the second number.
// 4. Use bitwise operators to modify the bits.
// 5. Keep all other bits of the first number unchanged.
// 6. Display the resulting number.

// Design:
// List of variables: num1, num2, pos, n, mask, result

// Steps:
// 1. Ask the user to enter the first integer.
// 2. Read the integer into num1.
// 3. Ask the user to enter the second integer.
// 4. Read the integer into num2.
// 5. Ask the user to enter the starting bit position.
// 6. Read the position into pos.
// 7. Ask the user to enter the number of bits to replace.
// 8. Read the number of bits into n.
// 9. Create a mask using (1U << n) - 1.
// 10. Shift the mask to the specified bit position.
// 11. Clear the selected bits in num1 using bitwise AND (&) and NOT (~).
// 12. Extract the lowest n bits from num2 using the mask.
// 13. Shift the extracted bits to the specified position.
// 14. Combine the modified num1 and extracted bits using bitwise OR (|).
// 15. Display the resulting number.
#include <stdio.h>

int main()
{
    unsigned int num1, num2, mask, result;
    int pos, n;

    printf("Enter first number: ");
    scanf("%u", &num1);

    printf("Enter second number: ");
    scanf("%u", &num2);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to replace: ");
    scanf("%d", &n);

    mask = (1U << n) - 1;

    num1 = num1 & ~(mask << pos);

    result = num1 | ((num2 & mask) << pos);

    printf("Result after replacing bits: %u\n", result);

    return 0;
}

