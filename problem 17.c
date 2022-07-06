// Write a program in C for addition of two Matrices of same size
#include <stdio.h>

int main()
{
    int arr1[50][50], brr1[50][50], crr1[50][50], i, j, n;

    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);

    /* Stored values into the array*/
    printf("Input elements in the first matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Input elements in the second matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &brr1[i][j]);
        }
    }
    printf("\nThe First matrix is :\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", arr1[i][j]);
    }

    printf("\nThe Second matrix is :\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", brr1[i][j]);
    }
    /* calculate the sum of the matrix */
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            crr1[i][j] = arr1[i][j] + brr1[i][j];
    printf("\nThe Addition of two matrix is : \n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", crr1[i][j]);
    }
    printf("\n\n");

    return 0;
}

// output:
// Input the size of the square matrix (less than 5): 2
// Input elements in the first matrix :
// element - [0],[0] : 1
// element - [0],[1] : 2
// element - [1],[0] : 3
// element - [1],[1] : 4
// Input elements in the second matrix :
// element - [0],[0] : 5
// element - [0],[1] : 6
// element - [1],[0] : 7
// element - [1],[1] : 8

// The First matrix is :

// 1       2
// 3       4
// The Second matrix is :

// 5       6
// 7       8
// The Addition of two matrix is :

// 6       8
// 10      12
