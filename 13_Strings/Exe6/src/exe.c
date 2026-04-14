/* putchar() */

#include <stdio.h>

int main(void)
{
    int ch;
    for ( ch = 'A'; ch <= 'Z'; ch++)
    {
        putchar(ch);
    }
    printf("\n");

    return 0;
}