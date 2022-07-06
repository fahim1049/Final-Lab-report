// Write a program in C to sort elements of the array in descending order.
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
            if (arr1[i] < arr1[j])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }

    printf("\nElements of array is sorted in descending order:\n");
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
// element - 0 : 2
// element - 1 : 4
// element - 2 : 7
// element - 3 : 9
// element - 4 : 10

// Elements of array is sorted in descending order:
// 10  9  7  4  2
