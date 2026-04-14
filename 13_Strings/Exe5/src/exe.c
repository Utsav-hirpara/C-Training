/* User define function to take string as input */

#include <stdio.h>

int input(char s[], int n);

int main(void)
{
    char s[100];
    int n = input(s, 99);
    printf("%d %s \n", n, s);
    
    return 0;
}

int input(char s[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            s[i++] = ch;
        }    
    }
    s[i] = '\0';
    return i;
}