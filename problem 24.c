// Enter a six digit number and print the number in reverse order and find the sum of those number.
#include <stdio.h>

int main()
{
    int n, reverse_num = 0, mod, sum = 0;

    printf("Please input six digit number : ");

    scanf("%d", &n);

    while (n != 0)
    {
        mod = n % 10;
        sum += mod;
        reverse_num = reverse_num * 10 + mod;

        n /= 10;
    }

    printf("Reverse number : %d\n", reverse_num);
    printf("Sum number : %d\n", sum);

    return 0;
}

// output:
// Please input six digit number : 123456
// Reverse number : 654321
// Sum number : 21
