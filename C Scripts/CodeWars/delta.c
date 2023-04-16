#include <stdio.h>

int main(void)
{
    int numbers[5] = {1, 3, 5, 7, 9};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Array of %d is %n?\n", *(numbers + i), (numbers + i));
        printf("\n");
    }
    return (0);
}