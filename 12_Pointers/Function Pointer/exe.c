#include <stdio.h>

#define ops 4

float sum(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main(void)
{
    float (*ptr2func[ops]) (float, float) = {sum, sub, mul, div};
    int choice;
    float a, b;
    printf("Enter your choice : \n");
    scanf("%d", &choice);
    printf("Enter two numbers : \n");
    scanf("%f %f", &a, &b);
    printf("%f\n", ptr2func[choice] (a, b));

    return 0;
}

float sum(float a, float b)
{
    return (a + b);
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}