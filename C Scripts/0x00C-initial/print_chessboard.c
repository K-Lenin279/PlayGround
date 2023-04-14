#include <stdio.h>
#include <string.h>

void print_chessboard(char (*s)[8])
{
    unsigned int i, j = 0;

    for (i = 0; i < 64; i++)
    {
        if (i % 8 == 0 && i != 0)
        {
            j = i;
            putchar('\n');
        }
        putchar(s[i / 8][i - j]);
    }
    putchar('\n');
}

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