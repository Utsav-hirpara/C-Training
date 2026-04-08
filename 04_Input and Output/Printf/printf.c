#include <stdio.h>

int main(void)
{
    int two = 2, three = 3, six = 6;
    int result = (two + three) * six/two;
    printf("The result of (%d + %d) * %d/%d is given in below line.\n", two, three, six, two);
    printf("%d\n", result);

    return 0;
}