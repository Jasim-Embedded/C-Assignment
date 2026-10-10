// Requirement:
// Write a C program to find the second largest and second smallest
// elements in an array without sorting it.

// Constraints:
// 1. Accept the size and elements of the array from the user.
// 2. Find the second largest and second smallest distinct values.
// 3. Do not sort the array.
// 4. Use arrays, loops, and conditional statements.
// 5. Handle duplicate values correctly.
// 6. If a second largest or second smallest value does not exist,
//    display an appropriate message.
// 7. Display both results.

// Design:
// List of variables: arr, n, i, large, secondLarge, small,
// secondSmall, foundLarge, foundSmall

// Steps:
// 1. Ask the user to enter the size of the array.
// 2. Read the size into n.
// 3. Check whether the array size is valid.
// 4. Ask the user to enter the array elements.
// 5. Read the elements into arr using a for loop.
// 6. Initialize large and small with the first array element.
// 7. Traverse the array to find the largest and smallest values.
// 8. Traverse the array again to find the second largest distinct value.
// 9. If an element is smaller than large and is greater than
//    secondLarge, update secondLarge and set foundLarge to 1.
// 10. Find the second smallest distinct value.
// 11. If an element is greater than small and is smaller than
//     secondSmall, update secondSmall and set foundSmall to 1.
// 12. Check foundLarge and display the second largest value
//     or an appropriate message.
// 13. Check foundSmall and display the second smallest value
//     or an appropriate message.


#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int large, secondLarge;
    int small, secondSmall;
    int foundLarge = 0, foundSmall = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    large = small = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }

        if (arr[i] < small)
        {
            small = arr[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] < large &&
            (!foundLarge || arr[i] > secondLarge))
        {
            secondLarge = arr[i];
            foundLarge = 1;
        }

        if (arr[i] > small &&
            (!foundSmall || arr[i] < secondSmall))
        {
            secondSmall = arr[i];
            foundSmall = 1;
        }
    }

    if (foundLarge)
    {
        printf("Second largest element: %d\n", secondLarge);
    }
    else
    {
        printf("There is no second largest number.\n");
    }

    if (foundSmall)
    {
        printf("Second smallest element: %d\n", secondSmall);
    }
    else
    {
        printf("There is no second smallest number.\n");
    }

    return 0;
}

