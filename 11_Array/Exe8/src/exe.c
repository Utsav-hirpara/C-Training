/* Matrix Multiplication */

#include <stdio.h>
#define MAX 50

int main(void)
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumn, brows, bcolumn, i, j, k, sum = 0;

    printf("Enter the rows and column of the matrix a : ");
    scanf("%d %d", &arows, &acolumn);

    printf("Enter the elements of the matrix a : ");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumn; j++)
        {
            scanf("%d", &a[i][j]);
        } 
    }

    printf("Enter the rows and column of the matrix b : ");
    scanf("%d %d", &brows, &bcolumn);
    if (brows != acolumn)
    {
        printf("It is not possible.\n");
    }
    else{
    printf("Enter the elements of the matrix b : ");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumn; j++)
        {
            scanf("%d", &b[i][j]);
        }  
    }
    }

    printf("\n");

    for(i = 0; i < arows; i++)
    {
        for ( j = 0; j < bcolumn; j++)
        {
            for ( k = 0; k < brows; k++)
            {
                sum += a[i][k] * b[k][j];
            }

            product[i][j] = sum;
            sum = 0;
        }
    }

    printf("Resultant matrix is : \n");
    for ( i = 0; i < arows; i++)
    {
        for ( j = 0; j < bcolumn; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}