/*Write a program to count the number of set bits in a number using a 
loop and bitwise operators.*/

#include <stdio.h>

int main(void)
{
    unsigned int num, count = 0;

    printf("Enter the number : ");
    scanf("%u", &num);

    // while (n != 0)
    // {
    //     n = n / 10;
    //     count++; 
    // }
    // printf("Count : %d\n", count);
    // printf("Number : %d \n", num);

    for ( int i = 1; num > 0; i++)
    {
        if(num & 1)
        {
            count++;
        }
         num = num >> 1;
    }
    printf("Count : %d\n", count);
    

    return 0;
}