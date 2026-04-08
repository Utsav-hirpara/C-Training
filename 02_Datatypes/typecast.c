#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // atoi()
    char str[] = "123";
    int num = atoi(str);
    printf("%d\n", num);
    printf("%c\n", num);

    char c = num - 3;
    printf("%c\n  %d\n", c, c);


    // itoa()
    // int num = 123;
    // char str[10];

    // itoa(num,str, 10);

    // printf("%s\n", str);

    // return 0;
}