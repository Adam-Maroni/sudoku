#include "sudoku.h"


char    **parsing(int argc, char **argv)
{
    char grid[9][9];
    int x;
    int y;

    x = 0
    while (x < 9)
    {
        while (y < 9)
        {
            y = 0;
            if (argv[x][y] == '.')
                grid[x][y] = '0';
            else
                grid[x][y] = argv[x][y];
            y++;
        }
    }


}