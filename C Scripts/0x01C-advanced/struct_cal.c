#include <stdio.h>
#include <stdlib.h>

/**
 * This program is a model of calendar using structures
 */
struct date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    struct date today;
    struct date tomorrow;
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30,
                                  31, 31, 30, 31, 30, 31};

    printf("Enter today's date (mm/dd/yyyy):\n");
    scanf("%02i/%02i/%04i", &today.day, &today.month, &today.year);

    if (today.day != daysPerMonth[today.month - 1])
    {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12) // end of year
    {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else // end of month
    {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf("Tomorrow's date is %02i/%02i/%04i\n", tomorrow.day, tomorrow.month, tomorrow.year);
    return (0);
}