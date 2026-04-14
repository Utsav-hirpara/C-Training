/* Get string */

#include <stdio.h>

int main(void)
{
    // char a[10];
    // printf("Enter the string \n");
    // scanf("%10s", a);
    // printf("%s\n", a);

    char b[11];
    printf("Enter the string \n");
    gets(b);
    printf("You entered : %s\n", b);

    return 0;
}