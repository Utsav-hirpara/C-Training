// Write a program to set the p-th bit of a given integer.


#include <stdio.h>
int main(void)
{

    
    int a, b;
    printf("Enter number : ");
    scanf("%d", &a);
    printf("Enter the bit position to set : ");
    scanf("%d", &b);

    // set the bit
    a = a | (1 << b);
    printf("%d\n", a);

    // i = 1 << 5;
    // printf("%d\n", i);




    return 0;
}