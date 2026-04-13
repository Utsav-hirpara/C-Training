/* Write a program to create a function that finds the sum of all elements in an array. */

#include <stdio.h>
#include "fun.h"
extern int sum(int a[5]);
int main(void)
{
    int a[5] = {5,12,10,50,20};
    int total = sum(a);
    printf("Size of array = %d\n", sizeof(a));
    printf("Sum = %d\n", total);
    
}