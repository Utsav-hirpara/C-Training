/* Write a program to create a function that returns the maximum element in an array. */

#include <stdio.h>


void minmax(int a[], int len, int *min, int *max){
    *min = *max = a[0];
    for (int i = 1; i <len; i++)
    {
        if(a[i] < *min)
            *min = a[i];
        if(a[i] > *max)
            *max = a[i];
    }
}
int main(void)
{
    int a[] = {23, 45, 6, 98,545,196874,2165,1516,1,3};
    int min, max;
    int len = sizeof(a)/sizeof(a[0]);

    minmax(a, len, &min, &max);
    
    printf("Min = %d , Max = %d \n", min, max);
    return 0;
}