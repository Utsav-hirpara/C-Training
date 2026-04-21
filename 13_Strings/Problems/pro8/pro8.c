/*
Write a program to create a function that concatenates two strings using pointer arithmetic.
*/

#include <stdio.h>
#include <string.h>

void stringcon(char *dest, char *src);
int main(void)
{
    char str1[30] = "ABCD";
    char str2[] = "EFGHI";

    printf("Befor : %s\n", str1);
    
    stringcon(str1, str2);
    
    printf("After : %s\n", str1);
    return 0;
}

void stringcon(char *dest, char *src)
{
    for ( dest; *dest != '\0';dest++)
    {
        
    }

    for (src ; *src != '\0'; src++)
    {
        *dest = *src;
        dest++;
    }
    *dest = '\0'; 
}