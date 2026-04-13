#include <stdio.h>

int sum(int a[5]){
    int sum = 0;
    printf("Size of array : %d\n", sizeof(a));
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}