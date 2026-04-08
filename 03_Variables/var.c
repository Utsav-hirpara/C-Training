#include <stdio.h>

int main(void)
{
    int var = 3;
    var = 4;
    printf("%d\n", var);


    // int a;  valid
    // int _a;  valid
    // int a1;  valid
    // int A;  valid
    // int 1a;  invalid
    // int a_b; valid
    // int a b;  invalid
    // int Switch;  valid (because of uppercase)
    // int switch;  invalid


    return 0;
}