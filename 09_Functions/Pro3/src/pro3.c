// Write a program to create a function that counts how many times it is called

#include "count.h"

int main(void)
{
    funcount();
    funcount();
    funcount();
    funcount();
    funcount();
    funcount();
    funcount();
    int a = funcount();

    printf("Function called %d times\n", a);
    return 0;
}