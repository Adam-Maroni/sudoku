#include "sudoku.h"

int backtracking(char **grid, t_pt point)
{
    char value;
    t_pt next;
    int ret;
    t_pt cursor;

    value = '1';
    while (value <= '9')
    {
        grid[cursor.x][cursor.y] = value;
        if(all_ok(grid))
        {
            next = find_next_cell(grid);
            if (next.y == 9 && next.x == 9)
                return (1);
            ret = backtracking(grid, next);
            if (ret == 1)
                return (1);
        }
        value++;
    }
    grid[pos.x][pos.y] = '0';
    retur(0);
}