// Write a program to define a function that returns the maximum of three numbers.

#include <stdio.h>
extern int max(int, int, int);
int main(void)
{
    int num1, num2, num3;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);

    int maxnum = max(num1, num2, num3);

    printf("Maximum is : %d\n", maxnum);
    return 0;
}