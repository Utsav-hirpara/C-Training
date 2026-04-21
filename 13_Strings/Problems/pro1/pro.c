/* Write a program to create a function that calculates 
   string length without using library functions. */

#include <stdio.h>

int lenOfString(char name[]);

int main(void)
{
    
    char name[30];
    printf("Enter name : ");
    gets(name);
    puts(name);
    printf("Length of string is : %d\n", lenOfString(name));
    
    return 0;
}

int lenOfString(char name[])
{
    int count = 0, i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}