#include <stdio.h>

struct abc
{
    int a;
    int b;
    int c;
};

struct abc funcfill(int a1, int b1, int c1)
{
    struct abc val1 = {
                        .a = a1,
                        .b = b1,
                        .c = c1
    };
    return val1;
}

void funcprint(struct abc val2)
{
    printf("a = %d \n", val2.a);
    printf("b = %d \n", val2.b);
    printf("c = %d \n", val2.c);
}

int main(void)
{
    
    funcprint(funcfill(5, 9, 8));

    return 0;
}