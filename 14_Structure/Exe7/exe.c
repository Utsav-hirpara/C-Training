#include <stdio.h>

#pragma pack(1)

struct abc
{
    // char a;
    // char b;
    // int c; 

    char a;
    int b; 
    char c; 
};

int main(void)
{
    struct abc var;
    printf("%d \n", sizeof(var));

    return 0;
}