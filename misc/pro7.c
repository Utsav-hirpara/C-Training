#include <stdio.h>

struct abc
{
    int a;
    int b;
    int c;
};

void funcfill(struct abc *ptr)
{
   ptr->a = 5;
   ptr->b = 7;
   ptr->c = 10;
}

void funcprint(struct abc val2)
{
    printf("a = %d \n", val2.a);
    printf("b = %d \n", val2.b);
    printf("c = %d \n", val2.c);
}

int main(void)
{
    struct abc val;
    funcfill(&val);
    funcprint(val);
    

    return 0;
}