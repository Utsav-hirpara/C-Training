#include <stdio.h>

void fun();

int main(void)
{
    fun(3);

    printf("\n");
    return 0;
}

void fun(int n){
    if (n == 0){
        return;
    }
    fun(n-1);
    printf("%d ", n);
}   