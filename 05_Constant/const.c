#include <stdio.h>
#include "item.c"

//you can see "item" in "item.c"  

int main(void)
{
    const int i = 1;
    printf("%d\n", i);
    //int i = 2;
    printf("%d\n", i);

    const int PI = 3.14;
    printf("%d\n", PI);

    const float pi = 3.14;
    printf("%.2f\n", pi);

    printf("Items : %d\n", item);


    return 0;
}