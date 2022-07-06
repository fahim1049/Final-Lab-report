// Write a program in C to find the second smallest element in an array
#include <stdio.h>

int main()
{
    int arr1[50], n, i, j = 0, sml, sml2nd;

    printf("Input the size of array : ");
    scanf("%d", &n);
    /* Stored values into the array*/
    printf("Input %d elements in the array (value must be <9999) :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    /* find location of the smallest element in the array */
    sml = arr1[0];
    for (i = 0; i < n; i++)
    {
        if (sml > arr1[i])
        {
            sml = arr1[i];
            j = i;
        }
    }

    /* ignore the smallest element and find the 2nd smallest element in the array */
    sml2nd = 99999;
    for (i = 0; i < n; i++)
    {
        if (i == j)
        {
            i++; /* ignoring the smallest element */
            i--;
        }
        else
        {
            if (sml2nd > arr1[i])
            {
                sml2nd = arr1[i];
            }
        }
    }

    printf("The Second smallest element in the array is :  %d \n\n", sml2nd);

    return 0;
}

// output:
// Input the size of array : 5
// Input 5 elements in the array (value must be <9999) :
// element - 0 : 6
// element - 1 : 2
// element - 2 : 1
// element - 3 : 14
// element - 4 : 67
// The Second smallest element in the array is :  2
