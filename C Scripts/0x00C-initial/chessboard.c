#include <stdio.h>

/**
 * print_chessboard - print a chessboard
 * @a: pointer
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
    unsigned int i, j;

    j = 0;
    for (i = 0; i < 64; i++)
    {
        if (i % 8 == 0 && i != 0)
        {
            j = i;
            putchar('\n');
        }
        putchar(a[i / 8][i - j]);
    }
    putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}