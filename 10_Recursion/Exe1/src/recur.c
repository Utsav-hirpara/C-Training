// Basics of recursion

#include <stdio.h>

int fun(int n){
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int x = fun(n -2);
        printf("X = %d\n", x);
        return 7 + x;
    }
}

int main(void){
    printf("%d\n", fun(4));
    return 0;
}