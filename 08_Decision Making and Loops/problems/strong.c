#include <stdio.h>

int main(void)
{
    unsigned int num, rem, fact = 1, result = 0;

    printf("Enter a number : ");
    scanf("%u", &num);

    int q = num;
    while (q != 0)
    {
        rem = q % 10;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q/10;
    }
    printf("%u\n", result);
    
    if(num == result)
    {
        printf("Number is strong\n");
    }
    else
    {
        printf("Number is not strong number\n");
    }

//     int f;
//     for (int i = 1; i <= num; i++)
//     {
//         fact = fact * i ;
//     }
//     printf("%d\n", fact);


    return 0;
 }