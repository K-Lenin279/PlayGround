#include <stdio.h>
#include <stdarg.h>

int printargs(int arg1, ...)
{
    va_list ap;
    int i;

    va_start(ap, arg1);
    for (i = arg1; i >= 0; i = va_arg(ap, int))
    {
        printf("%d ", i);
    }
    va_end(ap);
    putchar('\n');
    return (0);
}

int main(void)
{
    printargs(81, 45, 67, 98, -34, 7, -54);
    printargs(19, 29, -12);
    printargs(-2);
    printargs(5, -2); // To display correct output, insert at least two integers.
    return (0);
}