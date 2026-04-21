#include <stdio.h>

struct car
{
    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main(void)
{
    struct car c1 = {"DDis 190 Engine", "Diesel", 35, 5, 19.74};
    struct car c2 = {"Kappa", "Petrol", 22, 8, 14.5};

    printf("%f\n", c1.city_mileage);
    return 0;
}