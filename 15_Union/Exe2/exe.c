#include <stdio.h>

union abc
{
    int a; 
    char b;
    double c;
    float d;
};

int main(void)
{
    printf("%ld \n", sizeof(union abc));

    return 0;
}