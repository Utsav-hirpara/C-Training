#include <stdio.h>
#include <stdbool.h>

#define FALSE 0
#define TRUE 1

int main(void)
{

typedef enum {m=10,a,d,e} A;
     A x = m;
    A y = a;
    A I = d;

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", I);

    enum B {q,w,t};
    enum B p = q;
    enum B l = w;
    enum B z = t;

    printf("%d\n", p);
    printf("%d\n", l);
    printf("%d\n", z);


  //typedef enum {false = 1, true} BOOL;

   int i = 0;

   while(true){
      i++;
      printf("%d\n", i);

      if(i >= 5)
         break;
   }


    printf("True : %d False : %d\n", TRUE, FALSE);

    bool T;
    T = 10>5;

    if(T)
    {
        printf("True\n");
    }
    else 
    {
        printf("False\n");
    }

    bool M;
    int marks = 40;
    M = marks>50;

    if(M)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }


    return 0;

}