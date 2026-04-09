// Factorial using recursion

#include <stdio.h>

int fact(int);

int main(void)
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Factorial is : %d\n", fact(num));
    return 0;
}

int fact(int n){
    if (n == 1){
        return 1;
    }else{
        return n * fact(n-1);
    }
}