// Sum of elements of array using pointers

#include <stdio.h>

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int sum = 0, *p;

    for(p = &a[0]; p <= &a[4]; p++){         
        sum += *p;
    } 

    /* 
      A different method for address of array
      
    for(p = &a[0]; p <= &a[4]; p++){
        sum += *p;
    }  */

    printf("Sum : %d\n", sum);

    

    return 0;
}
