#include <stdio.h>

int main(void)
{
    char var;
    printf("Input var : ");
    scanf("%c", &var);
    printf("Output is : %d\n", var);

    int var1 = 0x43ff;
    printf("%x\n", var1);
    printf("%X\n", var1);
    printf("%d\n", var1);


    return 0;
}