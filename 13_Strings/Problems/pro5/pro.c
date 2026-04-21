/* Write a program to create a function that converts lowercase string to uppercase using ASCII logic. */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[30] = "dotCoM";
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }        
    }
    puts(name);

    return 0;
}