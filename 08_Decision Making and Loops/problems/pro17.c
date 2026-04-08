/*
Write a program to print numbers from 1 to n, skipping all multiples of 3
*/

#include <stdio.h>

int main(void)
{

    for ( int i = 1; i <= 10; i++)
    {
        if (!(i % 3))
            continue;
            
        printf("%d\n", i);
    }
    
    return 0;
}
