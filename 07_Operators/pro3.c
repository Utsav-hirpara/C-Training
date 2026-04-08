// Write a program to check whether a given integer is even or odd using bitwise operators.


#include <stdio.h>

int main(void)
{
    int i;
    printf("Enter a number : ");
    scanf("%d", &i);

    (i % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}