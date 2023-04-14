#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
    int a;

    a = 0;
    if (a < 0)
    {
        putchar('\n');
    }
    else
    {
        while (a < 10)
        {
            putchar(a + 48);
            if (a < 9)
            {
                putchar(32);
                putchar(44);
            }
            a++;
        }
        putchar('\n');
    }
    return (0);
}