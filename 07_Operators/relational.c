#include <stdio.h>

int main(void)
{
    int a = 7, b = 6;
    if(a >= b && a == 7 && a < 100)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("b is greater than a\n");
    }

    if(!(a == b))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }


    return 0;
}