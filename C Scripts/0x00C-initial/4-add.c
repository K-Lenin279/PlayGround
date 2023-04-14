#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int x, y, add;

    y = 0;
    add = 0;
    for (x = 1; x < argc; x++)
    {
        if (!(argc > 1))
        {
            printf("0\n");
        }
        if (!isdigit(argv[x][y]))
        {
            printf("Error\n");
            return (1);
        }
        add += atoi(argv[x]);
    }
    printf("%d\n", add);
    return (0);
}