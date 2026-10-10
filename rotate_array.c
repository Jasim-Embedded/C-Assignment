// Requirement:
// Write a C program to rotate the elements of an array by n positions
// in the specified direction (left or right).
// Elements that move beyond one end should reappear at the opposite end.

// Constraints:
// 1. Accept the array size and elements from the user.
// 2. Accept the number of positions to rotate and the direction.
// 3. The direction must be left (L or l) or right (R or r).
// 4. Handle rotation positions greater than the array size using
//    the modulus operator.
// 5. Use arrays, loops, and the modulus operator.
// 6. Display the rotated array.

// Design:
// List of variables: arr, temp, size, n, pos, i, direction

// Steps:
// 1. Ask the user to enter the array size.
// 2. Read the size into size.
// 3. Ask the user to enter the array elements.
// 4. Read the elements into arr using a for loop.
// 5. Ask the user to enter the number of positions to rotate.
// 6. Read the number of positions into n.
// 7. Ask the user to enter the rotation direction.
// 8. Read the direction into direction.
// 9. Calculate the effective rotation positions using pos = n % size.
// 10. If the direction is left, rotate the elements to the left using
//     a for loop and store them in temp.
// 11. If the direction is right, rotate the elements to the right
//     using a for loop and store them in temp.
// 12. If the direction is invalid, display an appropriate message.
// 13. Display the rotated array using a for loop.
// 14. Stop the program.

#include <stdio.h>

int main()
{
    int arr[100], temp[100];
    int size, n, pos, i;
    char dir;

    printf("Enter the array size: ");
    scanf("%d", &size);

    printf("Enter the array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &n);

    printf("Enter direction : ");
    scanf(" %c", &dir);

    pos = n % size;

    if (dir == 'L' || dir == 'l')
    {
        for (i = 0; i < size; i++)
        {
            temp[i] = arr[(i + pos) % size];
        }
    }
    else if (dir == 'R' || dir == 'r')
    {
        for (i = 0; i < size; i++)
        {
            temp[(i + pos) % size] = arr[i];
        }
    }

    printf("Rotated array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", temp[i]);
    }

    printf("\n");

    return 0;
}

