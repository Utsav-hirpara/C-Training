/*
Write a program to create a function that compares two strings and returns:
- 0 if equal
- positive if str1 > str2
- negative if str1 < str2
*/

#include <stdio.h>
#include <string.h>

int stringcompare(const char *s1,const char *s2);

int main(void)
{
    char s1[30], s2[30];
    printf("Enter s1 : ");
    gets(s1);
    printf("Enter s2 : ");
    gets(s2); 
    //int val = strcmp(s1,s2);
    //printf("value is : %d\n", val);
    int val = stringcompare(s1, s2);
    if (val == 0)
    {
        printf("both equal\n");
    }
    else if (val > 0)
    {
        printf("s1 is greater than s2\n");
    }
    else if (val < 0)
    {
        printf("s1 is less than s2\n");
    }
    
    return 0;
}

int stringcompare(const char *s1,const char *s2)
{
    while (*s2 && *s2)
    {
        if (*s1 != *s2)
        {
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    
    return *s1 - *s2;
}