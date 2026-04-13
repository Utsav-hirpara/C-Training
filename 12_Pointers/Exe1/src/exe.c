#include <stdio.h>

int main(void)
{
    /*int a = 5;
    int *x;
    x = &a;  */

    // or we can write above statements in a single line as shown below

    int a = 5, *x = &a;
    printf("Address of %d is %d . \n", a, x);

    // to address the original value we can use " * " , as shown below
    printf("The value at address %d is %d.\n", x, *x);


    //change the value of a using pointer
    *x =  8;
    printf("The new value at address %d is %d.\n", x, a);

    return 0;
}