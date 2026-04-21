/*
Write a program to create a function that compares two strings str1 and str2, and returns the index 
of the first character in str1 that matches any character from str2. If no match is found, return -1.

Example:
- str1 = "embedded"
- str2 = "xyzb"
- Output =>2 (because 'b' from str1 exists in str2)
*/

#include <stdio.h>
#include<string.h>

#define N 30

int main(void)
{
    char str1[N] = "Embedded";
    char str2[N] = "xyzb";

    for (int i = 0; i < strlen(str1); i++)
    {
        for (int j = 0; j < strlen(str2); j++)
        {
            if (str1[i] == str2[j])
            {
                printf("The first matching character is on %d place\n", i);
                return 0;
            }
        }      
    }
    
    return 0;
}