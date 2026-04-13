/* Write a program to create a function that checks whether an array is sorted in ascending order. */

#include <stdio.h>
#include <stdbool.h>

bool ascending(int a[], int len);

int main(void)
{
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // int a[] = {50, 40, 30, 20, 10};
    int len = sizeof(a) / sizeof(a[0]);

    int ret = ascending(a, len);
    if(ret == 0)
        printf("Array is not in ascending order.\n");
    else
        printf("Array is in ascending order.\n");

    return 0;
}
bool ascending(int a[], int len)
{
    for (int i = 1; i < len; i++)
    {
        if(a[i] < a[i - 1])             // for descending oder = if(a[i] > a[i - 1])
            return false;
    }
    return true;
}