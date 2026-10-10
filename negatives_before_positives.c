// Requirement:
// Write a C program to rearrange an array so that all negative numbers appear before all non-negative numbers while preserving their relative order.
// Zero is treated as positive.
//
// Constraints:
// 1. Accept the array size and elements from the user.
// 2. Place all negative numbers before non-negative numbers.
// 3. Preserve the original order of negative numbers.
// 4. Preserve the original order of positive numbers and zeros.
// 5. Use arrays, loops, conditional statements, and temporary storage.
// 6. Display the rearranged array.
//
// Design:
// List of variables: arr, temporary, n, i, j
//
// Steps:
// 1. Ask the user to enter the array size.
// 2. Read the size into n.
// 3. Ask the user to enter the array elements.
// 4. Read the elements into arr using a for loop.
// 5. Initialize j to 0.
// 6. Traverse the array and copy all negative numbers into temporary.
// 7. Traverse the array again and copy all non-negative numbers into temporary.
// 8. Copy the elements from temporary back into arr.
// 9. Display the rearranged array using a for loop.
// 10. Stop the program.

#include <stdio.h>

int main()
{
    int arr[100], temporary[100];
    int n, i, j = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temporary[j] = arr[i];
            j++;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            temporary[j] = arr[i];
            j++;
        }
    }

    for (i = 0; i < n; i++)
    {
        arr[i] = temporary[i];
    }

    printf("Rearranged array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

