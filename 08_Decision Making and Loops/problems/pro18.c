/*
Write a program to read numbers in a loop:
- Skip negative numbers
- Stop when number > 100 
*/

#include <stdio.h>

int main(void)
{
    int n;
    while (1)
    {
        //printf("Enter n : ");
        scanf("%d", &n);

        if(n >= 0 && n < 100)
            printf("Num = %d\n", n);
        else if (n < 0)
            continue;
        
        

        //printf("Num = %d\n", n);
    }
    
}