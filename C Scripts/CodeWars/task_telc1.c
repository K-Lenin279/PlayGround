#include <stdio.h>

int main(void)
{
    char ch, c;

    for (ch = 65; ch < 91; ch++)
    {
        putchar(ch);
        putchar('\n');
    }
    c = 97;
    while (c < 123)
    {
        putchar(c);
        putchar('\n');
        c++;
    }
    return (0);
}