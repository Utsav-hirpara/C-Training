#include <stdio.h>

int main(void)
{
    // for (int i = 0, j = 0, k = 0; i < 5; i++, j++, k++)
    // {
    //     printf("%d %d %d \n", i, j ,k);
    // }
    /*
    0 0 0
    1 1 1
    2 2 2
    3 3 3
    4 4 4
    */


    // for (int i = 0, j = 0, k = 0; i < 5, i < 3, k < 2; i++, j++, k++)
    // {
    //     printf("%d %d %d \n", i, j ,k);
    // }
    /*
    0 0 0
    1 1 1
    */

   do
   {
    printf("Hello\n");
   } while (5, 4, 3, 2, 1,0);
   /*
   Hello
   */
   

    

    return 0;
}