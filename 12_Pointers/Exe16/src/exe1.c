/* NULL pointer */

#include <stdio.h>

int main(void)
{
    int a = 3;
    int *ptr1 = &a;
    printf("%d \n", *ptr1);
    int *ptr = NULL;
    printf("%d\n", *ptr);

    return 0;
}