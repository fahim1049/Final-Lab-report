// Write a program in C to find the sum of all elements of the array

#include <stdio.h>

int main()
{
    int a[100];
    int i, n, sum = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of all elements stored in the array is: %d\n\n", sum);

    return 0;
}

// output:
// Input the number of elements to be stored in the array: 5
// Input 5 elements in the array:
// element - 0 : 2
// element - 1 : 4
// element - 2 : 6
// element - 3 : 7
// element - 4 : 8
// Sum of all elements stored in the array is: 27
