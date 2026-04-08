#include <stdio.h>

int main(void)
{
    int var, num;
    num = (var = 15, var+35);
    printf("%d\n", num);

    return 0;
}