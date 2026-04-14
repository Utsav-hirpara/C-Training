/* String initialization */

#include <stdio.h>

int main(void)
{
    char s[11] = "Hello world";
    for (int i = 0; i < 12; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    char a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    for (int i = 0; i < 6; i++)
    {
        printf("%c ", a[i]);
    }
    printf("\n");

    return 0;
}