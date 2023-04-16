#include <stdio.h>
#include <string.h>

#define N 9

int main(void)
{
    char cars[][N] = {"Subaru", "Maserati", "Tesla"};

    strcpy(cars[0], "Dodge");
    long long int i;
    for (i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("Type of car: %s\n", cars[i]);
    }
    printf("Type of car: %s\n", cars[4]);
    return (0);
}