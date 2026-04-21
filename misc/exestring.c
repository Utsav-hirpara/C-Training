#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[30];
    printf("enter name : ");

    gets(name);

    //scanf("%s", &name);
    puts(name);

    printf("%10.5s\n", name);
    printf("%s\n", &name[2]);

    return 0;
}