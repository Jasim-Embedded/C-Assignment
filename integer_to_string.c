// Requirement:
// Write a C program to convert an integer into a string of characters, including the negative sign if present.

// Constraints:
// 1. Accept an integer from the user.
// 2. Store each digit as a character in a character array.
// 3. Handle positive, negative, and zero values.
// 4. Use loops, strings, and operators.
// 5. Display the resulting string.

// Design:
// List of variables: num, str, i, j, digit, temp

// Steps:
// 1. Ask the user to enter an integer.
// 2. Read the integer into num.
// 3. If num is negative, store the '-' sign in the string.
// 4. Extract each digit from the integer using the modulus operator.
// 5. Convert each digit into a character and store it in the string.
// 6. Reverse the digits in the string to get the correct order.
// 7. Add the null character '\0' at the end of the string.
// 8. Display the resulting string.

#include <stdio.h>

int main()
{
    int num, i = 0, j, digit, temporary;
    char str[20];

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        str[i++] = '-';
        num = -num;
    }

    if (num == 0)
    {
        str[i++] = '0';
    }
    else
    {
        while (num > 0)
        {
            digit = num % 10;
            str[i++] = digit + '0';
            num = num / 10;
        }

        j = (str[0] == '-') ? 1 : 0;
        temporary = i - 1;

        while (j < temporary)
        {
            char ch = str[j];
            str[j] = str[temporary];
            str[temporary] = ch;
            j++;
            temporary--;
        }
    }

    str[i] = '\0';

    printf("String value: %s\n", str);

    return 0;
}

