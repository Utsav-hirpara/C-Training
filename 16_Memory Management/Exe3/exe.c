#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main() {
    int *p;

    p = (int*) malloc(5 * sizeof(int));
    if(p == NULL) {
        printf("Memory not allocated\n");
        return -ENOMEM;
    }

    p[0] = 10;
    p[1] = 20;
    p[3] = 30;

    for(int i = 0; i < 5; i++) {
        printf("%d \n", p[i]);
    }

    free(p);
    p = NULL;

    return 0;
}