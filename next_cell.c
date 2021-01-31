#include "sudoku.h"

t_pt    find_next_cell(char grid[9][9])
{
    t_pt next_cell;
    int x;
    int y;

    x = -1;
    while(++x < 9)
    {
        y = -1;
        while (++y < 9)
            if (grid[x][y] == '0')
            {
                next_cell.x = x;
                next_cell.y = y;
                return (next_cell);
            }
    }
    next_cell.x = x;
    next_cell.y = y;
    return (next_cell);
}

int isInBound(t_pt cell)
{
    if (cell.x > 8 || cell.y > 8)
        return (0);
    return (1);
}
