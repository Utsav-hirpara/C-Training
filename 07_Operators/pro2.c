// Write a program to swap two numbers


#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);


    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After XOR, a is : %d  b is %d\n", a, b);



    char i = 7;
    i ^= 5;
    printf("%d\n", printf("%d", i+=3));


    return 0;
}