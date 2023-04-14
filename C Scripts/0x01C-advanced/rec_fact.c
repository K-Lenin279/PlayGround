#include <stdio.h>

int factorial(unsigned int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}

int main(void)
{
    unsigned int n;

    for (n = 0; n <= 10; n++)
    {
        printf("%02u! Factorial = %d\n", n, factorial(n));
    }
    return (0);
}