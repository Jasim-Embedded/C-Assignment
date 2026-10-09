// Requirement:
// Write a C program to check whether a string is a palindrome
// by reversing the string and comparing it with the original.

// Constraints:
// 1. Accept a string from the user.
// 2. Use loops to find the string length and reverse the string.
// 3. Use character arrays to store the original and reversed strings.
// 4. Use strcmp() to compare the two strings.
// 5. Display whether the string is a palindrome or not.

// Design:
// List of variables: str, rev, i, j, len

// Steps:
// 1. Ask the user to enter a string.
// 2. Read the string into str.
// 3. Initialize len to 0.
// 4. Use a while loop to find the length of the string.
// 5. Use a for loop to reverse the string and store it in rev.
// 6. Add the null character '\0' at the end of rev.
// 7. Compare str and rev using strcmp().
// 8. If both strings are equal, display that the string is a palindrome.
// 9. Otherwise, display that the string is not a palindrome.


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, j = 0, len;

    printf("Enter a string: ");
    scanf("%s", str);
    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    

    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
