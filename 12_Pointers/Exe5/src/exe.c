#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p[5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = &a[i];
        printf("Address of %d is %d \n", *p[i], p[i]);
    }
    return 0;
}