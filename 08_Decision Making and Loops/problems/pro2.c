// Write a program to check whether a character is uppercase, lowercase, digit, or special character.

#include <stdio.h>

int main(void)
{
    char b;
    printf("Enter a character : ");
    scanf("%c", &b);
    
    
    switch (b)
    {
    case 'A' ... 'Z' : printf("Uppercase\n");
                       break;
    case 'a' ... 'z' : printf("Lowercase\n");
                       break;
    case '0' ... '9' : printf("Digit\n");
                       break;
    default: printf("Not a alphabet\n");
             break;
    }
}