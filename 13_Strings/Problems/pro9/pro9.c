/*
Write a program to create a function that removes all spaces from a string using pointers.
*/

#include <stdio.h>
#include <string.h>

void removespace(char *str);
int main(void)
{
    char str[50] = "There is no space in this line";
    printf("%s\n", str);
    removespace(str);
    printf("%s \n", str);  
    return 0;
}

void removespace(char *str)
{
    char *read = str;
    char *write = str;
    while (*read)
    {
        if (*read != ' ')
        {
            *write = *read;
            write++;
        }
        read++;
    }
    
    *write = '\0';  
}