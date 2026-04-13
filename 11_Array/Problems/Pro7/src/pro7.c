/* Write a program to create a function that found second largest number from array */

#include <stdio.h>


int secondlarge(int a[], int len);
int main(void)
{
    int a[] = {10,20,30,40,60,50};
    int len = sizeof(a) / sizeof(a[0]);

    printf("Second largest number is : %d\n", secondlarge(a,len));

    return 0;
}

int secondlarge(int a[], int len)
{
    int max = 0, secondmax = 0;
    for(int i = 0; i < len; i++)
    {
        if (a[i] > max)
        {
        secondmax = max;
        max = a[i];
        }else 
        { 
        secondmax = a[i];
        }
    }
    return secondmax;
}