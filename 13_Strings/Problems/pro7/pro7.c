/* 
Write a program to create a function that removes all characters from str1 which are present in str2, 
and updates str1 in-place.

Example:
- str1 = "embedded"
- str2 = "bd"
- Output =>"emeee"
*/

#include <stdio.h>
#include <string.h>
#define N 30

int main(void)
{
    char str1[N] = "embedded";
    char str2[N] = "bd";
    printf("%s\n", str1);
    int k = 0;
    
    for (int i = 0; str1[i] != '\0'; i++)
    {
        int found = 0;
        for (int j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                found = 1;
                break;
            }   
        }   
        if (!found)
        {
            str1[k] = str1[i];
            k++;
        }        
    }
    str1[k] = '\0';
    printf("Final STR = %s\n", str1);

    return 0;
}