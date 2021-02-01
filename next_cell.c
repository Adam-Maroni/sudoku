#include "sudoku.h"

t_pt    find_next_cell(char **grid, t_pt start)
{
    t_pt next_cell;
    int x;
    int y;

    x = start.x;
    while(x < 9)
    {
        y = start.y;
        while (y < 9)
        {
            if (grid[x][y] == '0')
            {
                next_cell.x = x;
                next_cell.y = y;
                return (next_cell);
            }
            y++;
        }
        x++;
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
