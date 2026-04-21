#include <stdio.h>
struct abc
{
    int (*fptr)(int, int);
    void (*ptr)(void);
    float (*ptr1)(float,float);
    int (*ptr2)(int, int);
};

int add(int a, int b){
    return a + b;
}

void print(void){
    printf("HELLO\n");
}

float div(float a, float b){
    return a / b;
}

int sub(int a, int b){
    return a - b;
}
int main(void)
{
    struct abc value = {.fptr = add,
                        .ptr = print,
                        .ptr1 = div,
                        .ptr2 = sub
                        };
    int result = value.fptr(5,2);
    printf("Resul : %d\n", result);
    value.ptr();
    float result1 = value.ptr1(10.2, 2.0);
    printf("Result : %f\n", result1);
    result = value.ptr2(20,10);
    printf("Result : %d \n", result);


    return 0;
}