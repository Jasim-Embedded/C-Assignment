// Requirement:
// Write a C program to replace multiple consecutive spaces in a sentence with a single space.

// Constraints:
// 1. Accept a sentence from the user.
// 2. Use fgets() to read the sentence, including spaces.
// 3. Replace multiple consecutive spaces with a single space.
// 4. Use loops, strings, conditional statements, and operators.
// 5. Display the sentence after removing unwanted spaces.

// Design:
// List of variables: str, i, j

// Steps:
// 1. Ask the user to enter a sentence.
// 2. Read the sentence using fgets().
// 3. Initialize j to 0.
// 4. Traverse the string character by character using a for loop.
// 5. Check whether the current character is a space.
// 6. Check whether the previously copied character is also a space.
// 7. If both are spaces, skip the current character using continue.
// 8. Otherwise, copy the current character to str[j] and increment j.
// 9. Add the null character '\0' at the end of the modified string.
// 10. Display the sentence after removing unwanted spaces.

#include <stdio.h>

int main()
{
    char str[500];
    int i, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && j > 0 && str[j - 1] == ' ')
        {
            continue;
        }

        str[j] = str[i];
        j++;
    }

    str[j] = '\0';

    printf("The Sentence After Removed Unwanted Spaces : %s", str);

    return 0;
}
