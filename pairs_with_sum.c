// Requirement:
// Write a C program to find all pairs of elements in an array whose sum equals a given target value.
//
// Constraints:
// 1. Accept the array size and elements from the user.
// 2. Accept the target sum from the user.
// 3. Use arrays, nested loops, and conditional statements.
// 4. The same element must not be paired with itself.
// 5. Display all pairs whose sum equals the target value.
// 6. If no valid pair exists, display an appropriate message.
//
// Design:
// List of variables: arr, n, i, j, target, found
//
// Steps:
// 1. Ask the user to enter the size of the array.
// 2. Read the size into n.
// 3. Ask the user to enter the array elements.
// 4. Read the elements into arr using a for loop.
// 5. Ask the user to enter the target sum.
// 6. Read the target sum into target.
// 7. Initialize found to 0.
// 8. Use nested loops to examine all possible pairs.
// 9. Start the inner loop from i + 1 to avoid pairing an element
//    with itself and avoid checking the same pair twice.
// 10. If arr[i] + arr[j] equals target, display the pair
//     and set found to 1.
// 11. If found is still 0, display a message that no pair exists.
// 12. Stop the program.

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, tar;
    int found = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &tar);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == tar)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("No pairs found.\n");
    }

    return 0;
}

