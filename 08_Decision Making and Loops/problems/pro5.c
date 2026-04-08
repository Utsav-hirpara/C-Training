//  Write a program to check whether the system is Little Endian or Big Endian.

#include <stdio.h>

int main() 
{

    
    unsigned int x = 1;
    char *c = (char*)&x;

    if (*c) 
    {
        printf("The system is Little Endian\n");
    } 
    else 
    {
        printf("The system is Big Endian\n");
    }



    return 0;
}