// Fibonacci series

#include <stdio.h>

int main(void)
{
    int n, i, a = 0, b = 1, sum;

    printf("Enter n : ");
    scanf("%d", &n);
    //printf("%d %d", a, b);

    // while ( i < n )
    // {
    //     sum = a + b;
    //     printf("  %d", sum);
    //     a = b;
    //     b = sum;
    //     i++;
    // }

    for(i = 0; i < n; i++ )
    {
        printf(" %d", a);
        sum = a + b;
        a = b;
        b = sum;
    }
     printf("\n");
}