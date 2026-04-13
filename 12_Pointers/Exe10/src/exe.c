#include <stdio.h>

int sum(int b[], int len);

int main(void){
    int a[] = {1,2,3,4,5,6,7,8,9,10,21,22,23,24,25,26,27,28,29,30};
    int len = sizeof(a) / sizeof(a[0]);
    printf("Len = %d\n", len);
    printf("Sum = %d \n", sum(a,len));
    return 0;
}

int sum(int b[], int len){
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += b[i];
    }
    return sum;   
}