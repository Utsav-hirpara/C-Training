#include <stdio.h>

void sum(int a, int b);
void sub(int a, int b);
void display(void (*fptr)(int, int));

int main(void)
{
    display(&sum);
    display(&sub);
    return 0;
}

void sum(int a, int b)
{
    printf("The sum is %d\n", a + b);
}

void sub(int a, int b)
{
    printf("The sub is %d\n", a - b);
}

void display(void (*fptr)(int, int))
{
    fptr(5, 2);
}