// Requirement:
// Write a C program to count the frequency of each digit (0–9) in an integer.

// Constraints:
// 1. Use a separate function to count digit frequencies.
// 2. Use an array to store the frequency of each digit.
// 3. Use a loop to extract each digit.
// 4. Use an array parameter to update frequencies directly.

// Design:
// List of variables: num, digit, freq[10], i

// Steps:
// 1. Ask the user to enter an integer.
// 2. Read the integer into num.
// 3. Initialize all elements of freq[] to 0.
// 4. Call countFrequency() with num and freq.
// 5. If num is 0, increment freq[0].
// 6. If num is negative, convert it to positive.
// 7. Extract each digit using num % 10.
// 8. Increment the frequency of that digit.
// 9. Remove the last digit using num / 10.
// 10. Repeat until num becomes 0.
// 11. Display the frequency of each digit from 0 to 9.


#include <stdio.h>

void countFrequency(int num, int freq[])
{
    int digit;

    if (num == 0)
    {
        freq[0]++;
        return;
    }

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }
}

int main()
{
    int  num;
    int freq[10] = {0};
    int i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    countFrequency(num, freq);

    printf("Digit frequencies:\n");

    for (i = 0; i < 10; i++)
    {
       printf("Digit %d appears %d times\n", i, freq[i]);
    }

    return 0;
}
