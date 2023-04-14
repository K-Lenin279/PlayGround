#include <stdio.h>
#include <stdlib.h>

/**
 * main -check the code
 * Return: Always 0 in main()
 */

void print_number(int n);

int main(void)
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}

/**
 * print_number - prints integer(s)
 * @n: input integer
 * Return: void
 */

void print_number(int n)
{
    unsigned int a;

    a = n;
    if (n < 0)
    {
        putchar(45);
        a = -n;
    }
    if (a / 10)
    {
        print_number(a / 10);
        putchar((a % 10) + 48);
    }
}