#include <stdio.h>


void swap(int *x, int *y);

int main(void)
{
    int a = 100, b = 200;

    printf("Before swaping a : %d\n", a);
    printf("Before swaping b : %d\n", b);

    swap(&a, &b);
    printf("After swaping a : %d\n", a);
    printf("After swaping b : %d\n", b);


    return 0;
}

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;


    return;
}