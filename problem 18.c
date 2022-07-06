// Write a program in C to display the n terms of odd natural number and their sum.
#include <stdio.h>
int main()
{
    int i, n, sum = 0;

    printf("Input number of terms : ");
    scanf("%d", &n);
    printf("\nThe odd numbers are :");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", 2 * i - 1);
        sum += 2 * i - 1;
    }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d \n", n, sum);

    return 0;
}

// output:
// Input number of terms : 5

// The odd numbers are :1 3 5 7 9
// The Sum of odd Natural Number upto 5 terms : 25
