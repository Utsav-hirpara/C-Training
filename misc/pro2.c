#include <stdio.h>
#include <string.h>

#define MAX 3
int main(void)
{
    char str[MAX];
    fgets(str, MAX, stdin);
    // int len = strlen(str);
    // printf("%d\n", len);
    int count = 0;
    for (int i = 0; str[i] != '\n'; i++)
    {
        count++;
    }
    printf("Length : %d\n", count);


    return  0;
}