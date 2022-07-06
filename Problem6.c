// Write a program in C to print all unique elements in an array

#include <stdio.h>
int main()
{
    int arr1[100], n, ctr = 0;
    int i, j, k;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nThe unique elements found in the array are: \n");
    for (i = 0; i < n; i++)
    {
        ctr = 0;
        for (j = 0, k = n; j < k + 1; j++)
        {
            // Increment the counter when the seaarch value is duplicate.
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    ctr++;
                }
            }
        }
        if (ctr == 0)
        {
            printf("%d ", arr1[i]);
        }
    }
    printf("\n\n");

    return 0;
}

// output:
// Input the number of elements to be stored in the array: 5
// Input 5 elements in the array :
// element - 0 : 2
// element - 1 : 2
// element - 2 : 3
// element - 3 : 5
// element - 4 : 2

// The unique elements found in the array are:
// 3 5
