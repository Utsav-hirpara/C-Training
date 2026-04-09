/* Write a c program to create a function that counts leading zeros in an integer. */

#include <stdio.h>


int count_zero(int num);

int main() {
    int number; 
    int result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    result = count_zero(number);

    printf("Number of leading zeros: %d\n", result);

    return 0;
}
int count_zero(int num) {
    int count = 0;
    int i;

    for (i = 31; i >= 0; i--) {
        if ((num >> i) & 1)
            break;          
        count++;            
    }

    return count;
}