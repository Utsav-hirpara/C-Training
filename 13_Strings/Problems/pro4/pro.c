/* Write a program to create a function that reverses a string in-place. */

#include <stdio.h>
#include <string.h>

void revstr(char str[]);

int main(void)
{
    
    char name[30] = "DOTCOM";
    revstr(name);

    return 0;
}

void revstr(char str[])
{
    char ch;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        ch = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = ch;
    }
    puts(str);
}