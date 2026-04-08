// Write a program to print patterns using nested loops (triangle, pyramid, inverted pyramid).

#include <stdio.h>

int main (void)
{
    int n, i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= 2*n - 1; j++)
        {
            if(j >= n - (i - 1) && j <= n+(i-1))
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");       
    }


    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }


    

    return 0;    
}