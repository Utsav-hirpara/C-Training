#include <stdio.h>

union abc{
    int a;
    char ch;
    float b;
};
int main() {


union abc u;
u.ch = 'A';

printf("%d\n", u.ch);
printf("%d\n", u.a);
printf("%f\n", u.b);

return 0;
}