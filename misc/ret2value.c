/* Print the row sum and column sum */

#include <stdio.h>

struct abc {
    int sumrow;
    int sumcol;
};

struct abc sumofrow(int a[][5]);

int main(void){
    
    int a[5][5] = {{1,2,3,4,5},{15,84,56,23,78},{45,87,12,23,56},{151,848,165,4894,2},{9,5,34,945,25}};

    printf("Size is : %d\n", sizeof(a));
    
    struct abc result = sumofrow(a);
    printf("%d \n ", result.sumrow);
    printf("%d \n ", result.sumcol);
   
    return 0;
}

struct abc sumofrow(int a[][5])
{
    
    struct abc var;
    printf("Size is : %d\n", sizeof(a));
    int sum1 =0, sum2 = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum1 += a[i][j];
        }
        printf("Row sum = %d\n", sum1);
        var.sumrow = sum1;
        sum1 = 0;
    }
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            sum2 += a[i][j];
        }
        printf("Column sum = %d\n", sum2);
        var.sumcol = sum2;
        sum2 = 0;
    }
    return var;
}