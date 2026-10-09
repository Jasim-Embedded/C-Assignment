// Requirement:
// Write a C program to reverse a string using an iterative approach.

// Constraints:
// 1. Accept a string from the user.
// 2. Use a loop to reverse the string.
// 3. Use character arrays to store the string.
// 4. Use operators to swap the characters.
// 5. Display the reversed string.

// Design:
// List of variables: str, i, j, temp, len

// Steps:
// 1. Ask the user to enter a string.
// 2. Read the string into str.
// 3. Find the length of the string using a loop.
// 4. Initialize i to 0 and j to the last character index.
// 5. Swap the characters at positions i and j using temp.
// 6. Increment i and decrement j.
// 7. Repeat until i is greater than or equal to j.
// 8. Display the reversed string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temporary;
    int i, j, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0')
    {
        len++;
    }

    i = 0;
    j = len - 1;

    while (i < j)
    {
        temporary = str[i];
        str[i] = str[j];
        str[j] = temporary;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
