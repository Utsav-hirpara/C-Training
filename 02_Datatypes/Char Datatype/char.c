#include    <stdio.h>

int main(void)
{
    // char var = 128;
    // printf("%c\n", var);
    // char B = 66;
    // printf("%c\n", B);
    
    // char a = 65;
    // printf("%d\n", a);

    // char c = 'a';
    // printf("%d\n", c);

    // char C = -130;
    // printf("%d\n", C);

    // unsigned char b = 258;
    // printf("%d\n", b);

    // unsigned int A = -22256;
    // printf("%u\n", A);

    // int var = 3;
    // {
    //     int var = 4;
    //     printf("%d\n", var);
    // }
    // printf("%d\n", var);

    // char a = 251;
    // unsigned char b = a;

    // printf("a = %c\n", a);
    // printf("b = %c\n", b);

    // if (a == b)
    // {
    //    printf("Same\n");
    // }
    // else
    // {
    //    printf("Not Same\n");
    // }

//     char a = 'i', b = '2', c = 'M';
//     char d = (a * b) / c;
//     printf("d as int: %d as char : %c\n",d,d);

//     char x = 10;
//    int y = x << 3;

//    printf("b as int: %d as char: %c\n", y, y);

    // char a = 'A';
    // char b = 'B';

    // printf("a = %c\n", a);
    // printf("b = %c\n", b);
    // printf("a + b = %c\n", a + b);
    // printf("a + b (as number) = %d\n", a + b);

     char c1 = 'A' + 1; 
    char c2 = 'C' - 1; 
    int diff = 'C' - 'A';

    printf("A + 1 = %c\n", c1);
    printf("C - 1 = %c\n", c2);
    printf("C - A = %d\n", diff);

    if ('b' > 'a') 
    {
        printf("'a' comes before 'b'\n");
    }
    else
    {
        printf("NO\n");
    }

    char upper = 'M';
    char lower = upper + 32;

    printf("%d  %c\n", lower, lower);

    upper = lower - 32;
    printf("%d  %c\n", upper, upper);


    return 0;
}