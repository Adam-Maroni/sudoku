#include "sudoku.h"

void parsing(char **argv, char **grid)
{
    int x;
    int y;

    x = 0;
    while (++x < 10)
    {
        y = -1;
        while (++y < 9)
        {
            if (argv[x][y] == '.')
                grid[x-1][y] = '0';
            else
                grid[x-1][y] = argv[x][y];
        }
    }
}