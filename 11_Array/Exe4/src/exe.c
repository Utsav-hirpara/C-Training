/*Counting elements of array*/

#include <stdio.h>

int main(void)
{
    int a[] = {1,2,3,5,7,8,9,3,2,4,5,7,89,2,3,6,5,7,8,96,56,2,5,14,4,7,85,9,6,5,41,7,85,96,352,41};
    printf("  %d \n", sizeof(a)/sizeof(a[0]));

    return 0;
}