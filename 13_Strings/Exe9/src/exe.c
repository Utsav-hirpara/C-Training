/* strcat() */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100], str2[100];
    strcpy(str1, "Welcome to ");
    strcpy(str2, "Dotcom IoT.");
    strcat(str1, str2);
    printf("%s \n", str1);

    return 0;
}