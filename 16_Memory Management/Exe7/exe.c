#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    // allocate memory
    p = (int*) malloc(3 * sizeof(int));

    if(p == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    // assign values
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;

    // print values
    for(int i = 0; i < 3; i++) {
        printf("%d ", p[i]);
    }

    // free memory
    free(p);

    // make pointer safe
    p = NULL;

    return 0;
}