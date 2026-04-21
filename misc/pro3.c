#include <stdio.h>
#include <string.h>

struct abc
{
    int a;
    char name[100];
    char c;
};

int main(void)
{
    struct abc s = {.a = 5, .name = "ABC", .c = 'A'};
    printf("%d %s %c \n", s.a, s.name, s.c);
    return 0;
}