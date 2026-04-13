#include <stdio.h>

int main(void)
{
    // assign one pointer value to other pointer
    int i = 10;
    int *p, *q;
    p = &i;
    q = p;
    printf("Value at p is : %d and value at q is : %d.\n", *p, *q);

    // give address of one pointer to other pointer
    q = &p;
    printf("The address of %p  is  %p\n", p, q);

    // get value of i using two pointers
    q = &p;
    printf("The address of %  is  %p\n", *p, q);
    

    return 0;
}