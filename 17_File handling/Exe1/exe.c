#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
    FILE *ptr = NULL; 
    ptr = fopen("myfile.txt", "r");  // Make myfile.txt
    printf("HEllo\n");

    // if (ptr == NULL)
    // {
    //     printf("Such file not exist.\n");
    //     return -ENOENT;
    // }
    



    /*
    char c = fgetc(ptr);
    printf("The character I read was : %c\n", c);
    c = fgetc(ptr);
    printf("The character I read was : %c\n", c);
    c = fgetc(ptr);
    printf("The character I read was : %c\n", c);
    */

   /*
    char str[4];
    fgets(str, 5, ptr);
    printf("%s \n", str); */

    fputc('o', ptr);
    printf("hello1\n");
    fputs(" Hello world", ptr);
    printf("hello2\n");

    fclose(ptr);
    printf("hello3\n");
    return 0;
}