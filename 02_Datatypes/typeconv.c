#include <stdio.h>

int main(void)
{
    //implicit
    int i = 10,y = 4;
    char c = 'c';

    int sum = i + c ;
    printf("%d\n  %c\n", sum, sum);

    char a = 'A';
    float b = a + 5.5;
    printf("%f\n", b);

    //Explicit
    float z = (float)i/y;
    printf("%f\n", z);

    return 0;
}