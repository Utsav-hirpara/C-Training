/*Designated initialization of array*/

#include <stdio.h>

int main(void)
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    int b[] = {[0] = 1, [5] = 2, [9] = 3};
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
    
}