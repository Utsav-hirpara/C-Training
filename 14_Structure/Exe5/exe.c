#include <stdio.h>
#include <string.h>

struct car
{
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main(void)
{
    struct car c[2];
    int i;
    for(i = 0; i < 2; i++)
    {
        printf("Enter the car %d fuel tank capacity : ", i+1);
        scanf("%d", &c[i].fuel_tank_cap);
        printf("Enter the car %d seating capacity : ", i + 1);
        scanf("%d", &c[i].seating_cap);
        printf("Enter the car %d city mileage : ", i + 1);
        scanf("%f", &c[i].city_mileage);
        printf("\n");
    }

    printf("\n");

    for ( i = 0; i < 2; i++)
    {
        printf("Car %d details : \n", i + 1);
        printf("Fuel tank capacity : %d\n", c[i].fuel_tank_cap);
        printf("Seating capacity : %d\n", c[i].seating_cap);
        printf("City mileage : %f\n", c[i].city_mileage);
        printf("\n");
    }
    return 0;
}