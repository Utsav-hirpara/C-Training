#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

struct abc
{
    int a;
    char name[100];
};


int main(void)
{
   
    struct abc *ptr = (struct abc *)malloc(sizeof(struct abc));
    if(ptr == NULL){
        printf("memory not allocated\n");
        return -ENOMEM;
    }
    
    strcpy(ptr->name, "Utsav");
    ptr->a = 5;
    printf("%d %s\n", ptr->a, ptr->name);

    free(ptr);

    return 0;
}