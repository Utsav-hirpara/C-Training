#include <stdio.h>

struct Ournode
{
    char c, y, z;
};

int main(void)
{
    struct Ournode p = { '1', '0', 'a'+2};
    struct Ournode *q = &p;
    printf("%c , %c\n", *((char*)q+1), *((char*)q+2));
    return 0;
}