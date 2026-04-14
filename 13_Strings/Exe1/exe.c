/* Basics of strings*/

#include <stdio.h>

int main(void)
{
    printf("%s\n", "Hello World");

    printf("%s\n", "I am working at Dotcom IOT.\
    Located in surat.");
    printf("%s\n", "I am working at Dotcom IOT."
    "Located in surat.");

    char *ptr = "Hello World, I am using strings.";

    printf("%s \n", ptr);
    printf("%.5s \n", ptr);
    printf("%8.5s \n", ptr);

    puts(ptr);

    return 0;
}