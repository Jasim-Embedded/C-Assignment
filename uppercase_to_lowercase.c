// Requirement:
// Write a C program to convert all uppercase letters in a string into their corresponding lowercase letters.
// Constraints:
// 1. Accept a string from the user.
// 2. Check each character individually using a loop.
// 3. Convert uppercase letters into lowercase letters.
// 4. Leave lowercase letters and non-alphabetic characters unchanged.
// 5. Use loops, strings, conditional statements, and ASCII values.
// 6. Display the modified string.

// Design:
// List of variables: str, i

// Steps:
// 1. Ask the user to enter a string.
// 2. Read the string using fgets().
// 3. Traverse the string character by character using a loop.
// 4. Check whether each character is between 'A' and 'Z'.
// 5. If true, convert it to lowercase by adding 32 to its ASCII value.
// 6. Leave all other characters unchanged.
// 7. Display the modified string.


#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lowercase string: %s", str);

    return 0;
}
