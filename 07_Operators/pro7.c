#include <stdio.h>
int main(void)
{
    int a,b;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("Enter the position of bit to br toggle : ");
    scanf("%d", &b);

    a = a ^ (1 << b);
    printf("%d\n", a);

}