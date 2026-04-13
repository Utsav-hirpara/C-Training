// Reverse series

#include <stdio.h>

#define N 5
int main(void)
{
    int a[N], *p;
    printf("Enter %d elements of the array : \n", N);
    for ( p = a; p <= a + N-1; p++)
    {
        scanf("%d", p);
    }

    printf("Elements in reverse order : ");
    for(p = a + N - 1 ; p >= a; p--)
    {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}