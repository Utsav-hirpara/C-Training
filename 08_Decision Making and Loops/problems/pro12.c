#include <stdio.h>

int main(void)
{
    int n = 1, row;
    printf("Enter the number of rows : ");
    scanf("%d", &row);

    for(int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}