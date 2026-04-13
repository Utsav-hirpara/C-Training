#include <stdio.h>

int main(void){
    int a[] = {1,2,3,4,5};
    int *p = a;
    printf("%d %d %d \n", *++p, *p++, *++p);
}