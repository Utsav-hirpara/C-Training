#include <stdio.h>

void sum(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);


int main(void)
{
    int ch, a, b;
    void(*fptr[5])(int, int) = {sum, sub, mul, div};
    printf("0 for Sum\n1 for sub\n2 for mul\n3 for div\n");
    printf("Enter choice : ");
    scanf("%d", &ch);
    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);
    (*fptr[ch])(a, b);
    return 0;
}


void sum(int a, int b)
{
    printf("The sum is %d\n", a + b);
}

void sub(int a, int b)
{
    printf("the sub is %d\n", a - b);
}

void mul(int a, int b)
{
    printf("The mul is %d\n", a * b);
}

void div(int a, int b)
{
    printf("The div is %d \n", a / b);
}