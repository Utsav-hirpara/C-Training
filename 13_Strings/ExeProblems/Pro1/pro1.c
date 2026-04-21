// Reverse the strings

#include <stdio.h>
#include <string.h>

int main(void)
{
    char p[20];
    char *s = "string";
    int length = strlen(s);
    int i;
    for ( i = 0; i < length; i++)
    {
        p[i] = s[length - i - 1];    
    }
    p[length] = '\0';
    printf("%s \n", p);

    return 0;
}