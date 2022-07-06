// Write a program in C to separate odd and even integers in separate arrays
#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], arr3[10];
    int i, j = 0, k = 0, n;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            k++;
        }
    }

    printf("\nThe Even elements are : \n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\nThe Odd elements are :\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n\n");

    return 0;
}

// output:
// Input the number of elements to be stored in the array :5
// Input 5 elements in the array :
// element - 0 : 20
// element - 1 : 25
// element - 2 : 21
// element - 3 : 42
// element - 4 : 47

// The Even elements are :
// 20 42
// The Odd elements are :
// 25 21 47
