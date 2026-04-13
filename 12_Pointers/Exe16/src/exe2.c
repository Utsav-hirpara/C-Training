/* Dangling pointer */

#include <stdio.h>
#include <stdlib.h>

int *f()
{
    int a = 9;
    return &a;
}

int main(void)
{

    int *ptr = f();
    /* int *ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    printf("%d \n", *ptr);
    free(ptr);
    printf("%d \n", *ptr);
    ptr = NULL; */
    printf("%d \n", *ptr); 

    return 0;
}