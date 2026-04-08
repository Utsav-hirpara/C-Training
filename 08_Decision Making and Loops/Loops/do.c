#include <stdio.h>

int main(void)
{
    int a = -10;

    do
    {
        printf("%d\n", a);
        a++;
    } while (a > 0 && a <= 10);
    


    return 0;
}