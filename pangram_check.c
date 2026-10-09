// Requirement:
// Write a C program to check whether a string is a pangram.

// Constraints:
// 1. Accept a sentence or string from the user.
// 2. Check whether all letters from a to z appear at least once.
// 3. Consider both uppercase and lowercase letters.
// 4. Use loops, strings, conditional statements, ASCII values, and operators.
// 5. Display whether the string is a pangram or not.

// Design:
// List of variables: str, i, j, found, count

// Steps:
// 1. Ask the user to enter a sentence.
// 2. Read the sentence using fgets().
// 3. Initialize count to 0.
// 4. Use an outer loop to check each letter from 'a' to 'z'.
// 5. Initialize found to 0 for each letter.
// 6. Use an inner loop to search for the current letter in the string.
// 7. Convert each character to lowercase using tolower().
// 8. If the current letter is found, set found to 1 and stop the inner loop.
// 9. If found is 1, increment count.
// 10. If count equals 26, display that the string is a pangram.
// 11. Otherwise, display that the string is not a pangram.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[500];
    int i, j, found, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 'a'; i <= 'z'; i++)
    {
        found = 0;

        for (j = 0; str[j] != '\0'; j++)
        {
            if (tolower(str[j]) == i)
            {
                found = 1;
                break;
            }
        }

        if (found == 1)
            count++;
    }

    if (count == 26)
        printf("The string is a pangram.\n");
    else
        printf("The string is not a pangram.\n");

    return 0;
}
