/* Write a program to create a function that rotates an array left by one position. */

#include <stdio.h>

void leftrotate(int a[], int len);

int main(void)
{
    int a[] = {10,20,30,40,50};
    int len = sizeof(a) / sizeof(a[0]);
    leftrotate(a, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

void leftrotate(int a[], int len)
{
    int temp = a[0];
    for (int i = 0; i < len; i++)
    {
        a[i] = a[i + 1];
    }
    a[len - 1] = temp;
}
