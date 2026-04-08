// Write a program to find the position of the first set bit using a loop.

#include <stdio.h>

int main(void)
{
    int num, count;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(num == 0)
    {
        printf("The number don't have any set bit\n");
    }
    else
    {
        while ((num & 1) == 0)
        {
            num = num >> 1;
            count++;
        }
        printf("The position of set bit is %d\n", count);
        
    }


    return 0;
}