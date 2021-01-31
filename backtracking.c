#include "sudoku.h"

int backtracking(char **grid, t_pt cell)
{
    char value;
    t_pt next_cell;
    int ret;

    value = '1';
    while (value <= '9')
    {
        grid[cell.x][cell.y] = value;
        if(all_ok(grid, cell))
        {
            next_cell = find_next_cell(grid);
            if (!isInBound(next_cell))
                return (1);
            ret = backtracking(grid, next_cell);
            if (ret == 1)
                return (1);
        }
        value++;
    }
    grid[cell.x][cell.y] = '0';
    return (0);
}