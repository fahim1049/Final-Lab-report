// Write a program in C to read n number of values in an array and display it in reverse order.

#include <stdio.h>

int main()
{
    int i, n, a[100];

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d :", i);
        scanf("%d", &a[i]);
    }
    printf("\nThe values store into the array are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%6d", a[i]);
    }
    printf("\n\nThe values store into the array in reverse are: \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%6d", a[i]);
    }

    printf("\n\n");
    return 0;
}

// output:
// Input the number of elements to store in the array: 3
// Input 3 number of elements in the array:
// element - 0 :2
// element - 1 :4
// element - 2 :6

// The values store into the array are:
//      2     4     6

// The values store into the array in reverse are:
//      6     4     2
