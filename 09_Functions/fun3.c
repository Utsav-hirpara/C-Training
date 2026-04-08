#include <stdio.h>

int sum (int x , int y){
   return x+y; 
}

int main() {
   int a = 10, b = 20; 
   printf("Sum of a and b is %d\n", sum(a, b));
   return 0;
}