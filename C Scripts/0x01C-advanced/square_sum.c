#include <stddef.h>

// Code-Wars task

int square_sum(const int *values, /*size_t*/ int count)
{
    int i, sum = 0;
    for (i = 0; i < count; i++)
    {
        sum += (values[i]) * (values[i]);
    }
    return sum;
}