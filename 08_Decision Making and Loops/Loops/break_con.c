#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    while (a != 0)
    {
        if(a < 0)
            break;
        printf("Enter a number : ");
        scanf("%d", &a);
    }


    int i, n = 2;
    for(i = 1; i <= 20; i++)
    {
        if(i == n)
        {
            n = n + 2;
            continue;
        }
        printf("%d\n", i);
    }

    


    return 0;
}