// Write the code to find the factorial of that number.

#include <stdio.h>
int main()
{
    int i, f = 1, num;

    printf("Input the number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
        f = f * i;

    printf("The Factorial of %d is: %d\n", num, f);

    return 0;
}

// output:
// Input the number : 5
// The Factorial of 5 is: 120
