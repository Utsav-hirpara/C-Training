#include <stdio.h>

int main(void)
{

    // increment in pointers
    int a[] = {5,1,7,8,4,2,6,9};
    int *p = &a[0];
    printf("%d\n", *(p++));
    printf("%d \n", *p);

    p = &a[5];
    printf("%d\n", *(++p));
    printf("%d \n", *p);

    // decrement in pointers
    p = &a[5];
    printf("%d\n", *(p--));
    printf("%d \n", *p);

    p = &a[1];
    printf("%d\n", *(--p));
    printf("%d \n", *p);

    return 0;
}