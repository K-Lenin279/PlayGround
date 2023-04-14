#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    /*int x, y, mul;

    mul = 0;
    for (x = 0; x < argc; x++)
    {
        for (y = 0; *argv[y] != '\0'; y++)
        {
            mul = atoi(argv[1]) * atoi(argv[2]);
            printf("%d\n", mul);
        }
    }*/

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

    return (0);
}