/*Without macro example of array*/

#include <stdio.h>

int main(void)
{
    int a[10], i;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&a[i]);
    }

    printf("Array elements are as folows\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}