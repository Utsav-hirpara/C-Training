#include <stdio.h>

int main(void)
{
    int a, b;
    
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("Enter the position of bit to clear : ");
    scanf("%d", &b);
    a = a & ~(1 << b);
    printf("%d\n", a);
    // i = ~(i << 1);
    // printf("%d\n", i);




    return 0;

}