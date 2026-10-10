// Requirement:
// Write a C program to merge two sorted arrays into a single sorted
// array in ascending order without using any sorting function.
//
// Constraints:
// 1. Accept the sizes and elements of two arrays from the user.
// 2. Both arrays must be sorted in ascending order.
// 3. Use arrays, loops, and multiple array handling.
// 4. Merge the arrays by comparing their elements one by one.
// 5. Store the merged elements in a third array.
// 6. Display the final merged array in ascending order.
//
// Design:
// List of variables: arr1, arr2, arr3, n1, n2, i, j, k
//
// Steps:
// 1. Ask the user to enter the size of the first array.
// 2. Read the size into n1.
// 3. Read the elements of the first array into arr1.
// 4. Ask the user to enter the size of the second array.
// 5. Read the size into n2.
// 6. Read the elements of the second array into arr2.
// 7. Initialize i, j, and k to 0.
// 8. Compare the elements of both arrays using a while loop.
// 9. Copy the smaller element into arr3 and increment its index.
// 10. Copy any remaining elements from the first array into arr3.
// 11. Copy any remaining elements from the second array into arr3.
// 12. Display the merged array using a loop.
// 13. Stop the program.

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter the size of the 1st array: ");
    scanf("%d", &n1);

    printf("Enter the 1st array elements:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the 2nd array: ");
    scanf("%d", &n2);

    printf("Enter the 2nd array elements:\n");
    for (j = 0; j < n2; j++)
    {
        scanf("%d", &arr2[j]);
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged sorted array:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    printf("\n");

    return 0;
}

