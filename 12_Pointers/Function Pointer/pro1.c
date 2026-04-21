
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14

float edistance(int x1, int y1, int x2, int y2);
float areaofcircle(int x1, int y1, int x2, int y2, float (*fptr)(int, int, int, int));


int main(void)
{
    int x1, y1, x2, y2;
    printf("Enter the value of x1 and y1\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter the value of x2 and y2\n");
    scanf("%d %d", &x2, &y2);
    float (*fptr)(int, int, int, int) = &edistance;
    printf("Eculidian distance is : %0.2f \n", fptr(x1, y1, x2, y2));
    areaofcircle(x1, y1, x2, y2, fptr);

    return 0;
}


float edistance(int x1, int y1, int x2, int y2)
{
    return sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
}

float areaofcircle(int x1, int y1, int x2, int y2, float (*fptr)(int, int, int, int))
{
    float area;
    float radius = fptr(x1, y1, x2, y2);
    printf("radius: %0.2f\n",radius);
    area=PI*radius*radius;
    printf("area of the circle is: %0.2f\n",area);
    return 0;
        
}
