#include <stdio.h>

union abc
{
    int a;
    char b;
};

int main(void)
{
    union abc var;
    var.a = 90;
    union abc *p = &var;
    printf("%d , %c \n", p->a, p->b);

    return 0;
}