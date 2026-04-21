/*
Write a program to create a function that copies one string into another using pointers.
*/

#include <stdio.h>

#define N 30

void doccopy(char *ptr1, char *ptr2);
int main(void)
{
    char name[N] = "FULL NAME";

    printf("%s \n", name);
    char copy[N];

    char *ptr1, *ptr2;
    ptr1 = name;
    ptr2 = copy;

    doccopy(ptr1, ptr2);
    printf("Copy of string is : %s\n", copy);

    return 0;
}
void doccopy(char *ptr1, char *ptr2)
{
    for (ptr1; *ptr1 != '\0'; ptr1++,ptr2++)
    {
        *ptr2 = *ptr1;
    }
    *ptr2++ = '\0';
}