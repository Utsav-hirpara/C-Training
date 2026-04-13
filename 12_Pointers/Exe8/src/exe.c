#include <stdio.h>

int main(void)
{
    int a[5];
    *a = 5;
    *(a+1) = 10;
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
}