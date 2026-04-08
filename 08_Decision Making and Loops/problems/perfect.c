#include <stdio.h>

int main(void)
{
    int num, i, rem, sum = 0;
    printf("Enter number : ");
    scanf("%d", &num);
    
    for ( i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
        
    }
    if (sum == num)
    {
        printf("%d is a perfect number\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;  
}