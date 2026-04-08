#include <stdio.h>

int main (void)
{
    int dec = 0, binary, base = 1, rem, num;
    printf("Enter the binary number :");
    scanf("%d", &binary);

    num = binary;
    while (binary != 0)
    {
        rem = binary % 10;
        dec = dec + rem * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal number : %d\n", dec);


    return 0;
    
}