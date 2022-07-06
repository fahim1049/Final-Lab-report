// Write a program in C to sort elements of array in ascending order
#include <stdio.h>

int main()
{
    int arr1[100];
    int n, i, j, tmp;

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr1[j] < arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\n\n");
    return 0;
}

// output:
// Input the size of array : 5
// Input 5 elements in the array :
// element - 0 : 3
// element - 1 : 7
// element - 2 : 10
// element - 3 : 5
// element - 4 : 8

// Elements of array in sorted ascending order:
// 3  5  7  8  10
