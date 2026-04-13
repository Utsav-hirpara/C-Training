/*Example with macro*/

#include <stdio.h>
#define N 10

int main(void)
{
int a[N], i;
    for ( i = 0; i < N; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&a[i]);
    }

    printf("Array elements are as folows\n");
    for ( i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}