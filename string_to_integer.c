// Requirement:
// Write a C program to convert a string of digits into
// its equivalent integer value.

// Constraints:
// 1. Accept a string of digits from the user.
// 2. Process the string character by character.
// 3. Use loops, strings, and arithmetic operators.
// 4. Convert each digit character into its integer value.
// 5. Display the final integer result.

// Design:
// List of variables: str, num, i, digit

// Steps:
// 1. Ask the user to enter a number as a string.
// 2. Read the string into str.
// 3. Initialize num to 0.
// 4. Process each character of the string using a loop.
// 5. Convert each character into its integer digit.
// 6. Multiply num by 10 and add the current digit.
// 7. Repeat until the end of the string is reached.
// 8. Display the converted integer value.

#include <stdio.h>

int main()
{
    char str[100];
    int num = 0, i = 0, digit;

    printf("Enter a number as a string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        digit = str[i] - '0';
        num = num * 10 + digit;
        i++;
    }

    printf("Equivalent integer value: %d\n", num);

    return 0;
}
