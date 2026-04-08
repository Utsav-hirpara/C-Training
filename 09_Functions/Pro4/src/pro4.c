/*Write a program to create a function that returns 
the first 3 least significant bits (LSB) of a given integer. */

#include "count.h"

int main() {
    int number;
    
    printf("Enter an integer: ");
    if ( scanf("%d", &number) != 1) return 1;

    scanf("%d", &number);


    int result = get_last_3_bits(number);
    
    printf("The first 3 LSBs of %d (decimal value) are: %d\n", number, result);
    
    return 0;
}
