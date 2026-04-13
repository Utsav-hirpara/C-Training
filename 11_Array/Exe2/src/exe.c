/*Reverse the series*/

#include <stdio.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}