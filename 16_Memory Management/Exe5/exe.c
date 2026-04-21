#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    // allocate memory for 5 integers
    p = (int*) calloc(5, sizeof(int));

    // check allocation
    if(p == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    // print values (all should be 0)
    for(int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    // assign new values
    p[0] = 10;
    p[1] = 20;

    printf("\nAfter assignment:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
    // free memory
    free(p);
    p = NULL;

    return 0;
}