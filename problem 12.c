// Write a program in C to insert New value in the array (unsorted list ).

#include <stdio.h>

int main()
{
    int arr1[100], i, n, p, x;

    printf("Input the size of array : ");
    scanf("%d", &n);
    /* Stored values into the array*/
    printf("Input %d elements in the array in ascending order:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &x);
    printf("Input the Position, where the value to be inserted :");
    scanf("%d", &p);

    printf("The current list of the array :\n");
    for (i = 0; i < n; i++)
        printf("% 5d", arr1[i]);
    /* Move all data at right side of the array */
    for (i = n; i >= p; i--)
        arr1[i] = arr1[i - 1];
    /* insert value at given position */
    arr1[p - 1] = x;

    printf("\n\nAfter Insert the element the new list is :\n");
    for (i = 0; i <= n; i++)
        printf("% 5d", arr1[i]);
    printf("\n\n");

    return 0;
}

// output:
// Input the size of array : 5
// Input 5 elements in the array in ascending order:
// element - 0 : 2
// element - 1 : 5
// element - 2 : 6
// element - 3 : 3
// element - 4 : 8
// Input the value to be inserted :
// 5
// Input the Position, where the value to be inserted :2
// The current list of the array :
//     2    5    6    3    8

// After Insert the element the new list is :
//     2    5    5    6    3    8
