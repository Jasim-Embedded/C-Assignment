// Requirement:
// Write a C program to remove duplicate elements from a given array.

// Constraints:
// 1. Accept the size and elements of the array from the user.
// 2. Identify duplicate elements in the array.
// 3. Store each element only once in a separate array.
// 4. Use arrays, loops, and conditional statements.
// 5. Display the array containing only unique elements.

// Design:
// List of variables: arr, uni, n, i, j, found, count

// Steps:
// 1. Ask the user to enter the size of the array.
// 2. Read the size into n.
// 3. Ask the user to enter the array elements.
// 4. Read the elements into arr using a for loop.
// 5. Traverse each element of arr using an outer loop.
// 6. Initialize found to 0 for each element.
// 7. Use an inner loop to compare the current element with the elements in uni.
// 8. If a duplicate is found, set found to 1 and stop the inner loop.
// 9. If found is 0, store the element in uni[count].
// 10. Increment count after storing a unique element.
// 11. Repeat the process for all elements in arr.
// 12. Display the elements stored in uni using a for loop.

#include <stdio.h>

int main()
{
    int arr[100], uni[100];
    int n, i, j, found, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        found = 0;

        for (j = 0; j < count; j++)
        {
            if (arr[i] == uni[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            uni[count] = arr[i];
            count++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d ", uni[i]);
    }

    return 0;
}

