#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    p = (int*) malloc(3 * sizeof(int));

    for(int i = 0; i < 3; i++) {
        p[i] = (i + 1) * 10;
    }

    int *temp = realloc(p, 5 * sizeof(int));

    if(temp == NULL) {
        printf("Reallocation failed\n");
        free(p);
        return 1;
    }

    p = temp;

    p[3] = 40;
    p[4] = 50;

    for(int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    free(p);
    p = NULL;

    return 0;
}