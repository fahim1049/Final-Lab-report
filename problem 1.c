// Write a program in C to store elements in an array and print it

#include <stdio.h>

int main()
{
    int marks[3];
    printf("\nEnter marks of physics, chemistry and math\n");
    printf("...........................................\n");

    printf("\nEnter phy: ");
    scanf("%d", &marks[0]);

    printf("\nEnter che: ");
    scanf("%d", &marks[1]);

    printf("\nEnter math: ");
    scanf("%d", &marks[2]);

    printf("\nphy=%d ,che=%d ,math=%d \n", marks[0], marks[1], marks[2]);

    return 0;
}

// output:
// Enter marks of physics, chemistry and math
// ...........................................

// Enter phy: 90

// Enter che: 96

// Enter math: 94

// phy=90 ,che=96 ,math=94
