#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "header.h"

int add(int a, int b){
    return a + b;
}

void print(void){
    printf("HELLO\n");
}

float divi(float a, float b){
    return a / b;
}

int sub(int a, int b){
    return a - b;
}
int main(void)
{
    
    struct abc *stptr = (struct abc *)malloc(sizeof(struct abc));

    printf("%d\n", __LINE__);    if (stptr == NULL)
    {
        printf("Memory is not allocated\n");
        return -ENOMEM;
    }

    printf("%d\n", __LINE__);
    stptr->fptr = add;
    stptr->ptr  = print;
    stptr->ptr1 = divi;
    stptr->ptr2 = sub;
                        
    printf("%d\n", __LINE__);

    int result = stptr->fptr(5,2);
    printf("Resul : %d\n", result);
    printf("%d\n", __LINE__);
    stptr->ptr();
    printf("%d\n", __LINE__);
    float result1 = stptr->ptr1(10.2, 2.0);
    printf("Result : %f\n", result1);
    result = stptr->ptr2(20,10);
    printf("%d\n", __LINE__);
    printf("Result : %d \n", result);
    free(stptr);

    return 0;
}