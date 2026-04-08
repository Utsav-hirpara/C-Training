/* Write a program to evaluate a complex expression and show operator precedence:
a + b * c / d - e % f   */


#include <stdio.h>

int main(void)
{
    int a = 2, b = 3, c = 4, d = 5, e = 6, f = 7;
    printf("a + b * c / d - e %% f : %d\n", a + b * c / d - e % f);
    /*
    = 2 + 3 * 4 / 5 - 6 % 7
    = 2 + (3 * 4) / 5 - (6 % 7)
    = 2 + 12 / 5 - 6
    = 2 + 2 - 6
    = 4 - 6
    = -2
    */
    // printf("%d\n", e % f);
    return 0;
}