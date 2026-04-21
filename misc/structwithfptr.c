#include <stdio.h>
struct abc 
{
    void (*display)(int (*func)(int, int));
};
void display(int (*func)(int, int));
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(void)
{
    struct abc s1;
    s1.display = &display;
    s1.display(sum);
    s1.display(sub);
    s1.display(mul);
    s1.display(div);
    
    return 0;
}

int sum(int a, int b)
{
    printf("%s called\n", __func__);
    return a + b;
}

int sub(int a, int b)
{
    printf("%s called\n", __func__);
    return a - b;
}

int mul(int a, int b)
{
    printf("%s called\n", __func__);
    return a * b;
}

int div(int a, int b)
{
    printf("%s called\n", __func__);
    return a / b;
}

void display(int (*func)(int, int))
{
    printf("%s called\n", __func__);
    int a, b;
    printf("Enter two number(ex. 5 8)\n");
    scanf("%d %d", &a, &b);
    printf("Result = %d\n", func(a, b));
}