#include <stdio.h>

int main(void)
{
    int a, b, sum, carry;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    while (b != 0)
    {
        sum = a ^ b;
        carry = (a & b) << 1;
        a = sum;
        b = carry;
    }
    printf("Sum : %d\n", sum);
}