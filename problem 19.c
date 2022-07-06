// Write a program in C to display the n terms of harmonic series and their sum.
#include <stdio.h>
int main()
{
    int i, n;
    float s = 0.0;
    printf("Input the number of terms : ");
    scanf("%d", &n);
    printf("\n\n");
    for (i = 1; i <= n; i++)
    {
        if (i < n)
        {
            printf("1/%d + ", i);
            s += 1 / (float)i;
        }
        if (i == n)
        {
            printf("1/%d ", i);
            s += 1 / (float)i;
        }
    }
    printf("\nSum of Series upto %d terms : %.3f\n", n, s);

    return 0;
}

// output:
// Input the number of terms : 5

// 1/1 + 1/2 + 1/3 + 1/4 + 1/5
// Sum of Series upto 5 terms : 2.283
