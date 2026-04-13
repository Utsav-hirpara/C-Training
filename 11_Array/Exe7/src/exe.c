/* Print the row sum and column sum */

#include <stdio.h>

int main(void){
    int a[5][5] = {{1,2,3,4,5},{15,84,56,23,78},{45,87,12,23,56},{151,848,165,4894,2},{9,5,34,945,25}};
    int sum;
    //Row sum
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }
        printf("Row sum = %d\n", sum);
        sum = 0;
    }

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            sum += a[i][j];
        }
        printf("Column sum = %d\n", sum);
        sum = 0;
    }
    
    return 0;
}