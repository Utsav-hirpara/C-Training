#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);
void greetHello(int (*fptr)(int, int));
void greetGm();

int main(void)
{
    int (*ptr)(int, int);
    ptr = &sum;
    greetGm(ptr);
    greetHello(ptr);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

void greetHello(int (*fptr)(int, int))
{
    printf("Hello\n");
    printf("The sum of 5 and 7 is %d\n", fptr(7, 7)); 
}

void greetGm(int (*fptr)(int, int))
{
    printf("Good Morning\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}