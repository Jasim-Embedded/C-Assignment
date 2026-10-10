
// Requirement:
// Write a C program using recursion to convert a decimal number into a target base between 2 and 16.

// Constraints:
// 1. Accept a non-negative decimal number from the user.
// 2. The target base must be between 2 and 16.
// 3. Use a separate function for conversion.
// 4. Represent remainders 10 to 15 using A to F.
// 5. Display the converted value in the correct order.

// Design:
// List of variables: num, base, digits
// Function name: convertBase()

// Steps:
// 1. Ask the user to enter a decimal number.
// 2. Read the number into num.
// 3. Ask the user to enter the target base.
// 4. Read the base into base.
// 5. Check whether the number and base are valid.
// 6. Display the converted value label.
// 7. Call the convertBase() function with num and base.
// 8. If num is greater than or equal to base, call the function recursively with num divided by base.
// 9. Find the remainder using num % base.
// 10. Use the remainder as an index in the digits array.
// 11. Print the corresponding digit in the correct order.
// 12. Stop the program.

#include <stdio.h>

void convertBase(int num, int base)
{
    char digits[] = "0123456789ABCDEF";

    if (num >= base)
    {
        convertBase(num / base, base);
    }

    printf("%c", digits[num % base]);
}

int main()
{
    int num, base;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Enter the  base number from (2 to 16) you want : ");
    scanf("%d", &base);

    if (num < 0 || base < 2 || base > 16)
    {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Converted value: ");

    convertBase(num, base);

    printf("\n");

    return 0;
}

