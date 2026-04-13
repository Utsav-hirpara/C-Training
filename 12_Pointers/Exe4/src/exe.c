#include <stdio.h>

int *findmid(int a[], int n);
int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int *mid = findmid(a, n);
    printf("%d  \n", *mid);

    return 0;
}

int *findmid(int a[], int n){
    return &a[n/2];
}
