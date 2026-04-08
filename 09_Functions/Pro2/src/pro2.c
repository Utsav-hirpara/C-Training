// Write a program to create a function that swaps two numbers

#include <stdio.h>
#include "swap.h"

int main(void)
{
    int num1, num2;

    printf("Enter firts number :");
    scanf("%d", &num1);
    printf("Enter second number :");
    scanf("%d", &num2);

    swap(&num1, &num2);

    printf("Number 1 is : %d\n", num1);
    printf("Number 2 is : %d\n", num2);

    return 0;
}