/* String copy */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[6] = "Hello";
    char s2[3];
    //char s3[10];

    // printf("%s\n", strcpy(s2, s1));
    // printf("%s\n", s2);

    // strcpy(s3, strcpy(s2,s1));
    // printf("%s %s\n", s2, s3);

    strncpy(s2, s1, sizeof(s2));
    s2[sizeof(s2) -1] = '\0';
    printf(" %s \n", s2);


    return 0;
}