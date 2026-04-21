#include <stdio.h>

struct Old_date
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

struct New_date
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
};

int main(void)
{
    struct New_date today;
    struct Old_date Calender;

    Calender.day = 28;
    Calender.month = 12;
    Calender.year = 2025;

    today.day = 120;
    today.month = 12;
    today.year = 2025;

    printf("Date is : %u/%u/%u \n", Calender.day, Calender.month, Calender.year);
    printf("Size of struct Old_date is : %zu bytes. \n", sizeof(Calender));

    printf("Date is : %u/%u/%u \n", today.day, today.month, today.year);
    printf("Size of struct Old_date is : %zu bytes. \n", sizeof(today));

    return 0;
}