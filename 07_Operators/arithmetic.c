#include <stdio.h>

int main(void)
{

    int a, b, c, d;
    printf("Enter a : \n");
    scanf("%d", &a);
    printf("Enter b : \n");
    scanf("%d", &b);
    printf("Enter c : \n");
    scanf("%d", &c);
    printf("Enter d : \n");
    scanf("%d", &d);

    printf("Sum = %d\n", a + b);
    printf("Substraction = %d\n", a - b);
    printf("Modulus = %d\n", a % b);

    
    printf("a * b / c = %d\n", a * b / c);
    printf("a + b - c = %d\n", a + b - c);
    printf("a + b * d - c %% a = %d\n", a + b * d - c % a);

    return 0;
}