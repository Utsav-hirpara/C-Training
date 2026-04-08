#include <stdio.h>

int main(void)
{
    int a = 3;
    char b = 'a';

    switch(a)
    {
        case 1 : printf("It is 1\n");
                 break;
        case 2 : printf("It is 2\n");
                 break;
        case 3 : printf("It is 3\n");
                 break;
        case 4 : printf("It is 4\n");
                 break;
        default : printf("Not a Number\n");
                 break;
    }

    switch(b)
    {
        case 'A' : printf("It is A\n");
                 break;
        case 'B' : printf("It is B\n");
                 break;
        case 'C' : printf("It is C\n");
                 break;
        case 'D' : printf("It is D\n");
                 break;
        default : printf("Not a ALPHABET\n");
                 break;
    }

    switch (b)
    {
    case 'A' ... 'Z' : printf("Uppercase\n");
                       break;
    case 'a' ... 'z' : printf("Lowercase\n");
                       break;
    default: printf("Not a alphabet\n");
             break;
    }

    

    return 0;
}