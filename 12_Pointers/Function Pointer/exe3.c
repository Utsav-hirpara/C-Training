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
    int n1, n2;
    printf("Enter two numbers\n");
    scanf("%d %d", &n1, &n2);
    printf("The sum of %d and %d is %d\n", n1, n2, fptr(n1, n2)); 
}

void greetGm(int (*fptr)(int, int))
{
    printf("Good Morning\n");
    int n1, n2;
    printf("Enter two numbers\n");
    scanf("%d %d", &n1, &n2);
    printf("The sum of %d and %d is %d\n", n1, n2, fptr(n1, n2));
}