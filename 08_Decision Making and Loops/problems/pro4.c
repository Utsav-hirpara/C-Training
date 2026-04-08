// Write a program to check whether the p-th bit of a given number is set or not and print the result.

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter the position : ");
    scanf("%d", &b);

    if((a & (1 << b)) != 0)
    {
        printf("Bit is set\n");
    }
    else 
    {
        printf("Bit is not set\n");
    }

    return 0;
}