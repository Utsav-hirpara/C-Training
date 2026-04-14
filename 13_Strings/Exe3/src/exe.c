/* String reverse*/

#include <stdio.h>

int main(void)
{
    char s[] = "Hello";
    char a[5];
    int i, j = 0;
    for (i = 4; i >=0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            a[j] = s[i];
        }
    }

    for (int k = 4; k >= 0; k--)
    {
        printf("%c", a[k]);
    }
    printf("\n");

    return 0;
}