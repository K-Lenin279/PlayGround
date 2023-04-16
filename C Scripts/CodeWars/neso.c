#include <stdio.h>
#include <string.h>
#define LENGTH(array) sizeof(array) / sizeof(array[0])

int main(void)
{
    double array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    unsigned int i;

    for (i = 0; i < LENGTH(array); i++)
    {
    printf("Size of array[%u] is %d\n", i, sizeof(array[i]));
    }
    printf("Size of return_type: %d\n", LENGTH(array));
    printf("Size of array: %d\n", sizeof(array));
    printf("Size of array[i]: %d\n", sizeof(array[0]));
    return (0);
}