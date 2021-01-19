#include "sudoku.h"

int line_ok(char **grid, t_pt cell)
{
    t_pt tocheck;

    tocheck.x = 0;
    tocheck.y = cell.y;
    while (tocheck.x <= 9)
    {
        if (tocheck.x == cell.x)
            (tocheck.x)++;
        if (grid[tocheck.x][tocheck.y] == grid[cell.x][cell.y])
            return (0);
        (tocheck.x)++;
    }
    return (1);
}

int col_ok(char **grid, t_pt cell)
{
    t_pt tocheck;

    tocheck.x = cell.x;
    tocheck.y = 0;
    while (tocheck.y <= 9)
    {
        if (tocheck.y == cell.y)
            (tocheck.y)++;
        if (grid[tocheck.x][tocheck.y] == grid[cell.x][cell.y])
            return (0);
        (tocheck.y)++;
    }
    return (1);
}

int cube_ok(char **grid, t_pt cell)
{
    t_pt tocheck;

    tocheck.x = (cell.x / 3) * 3;
    tocheck.y = (cell.y / 3) * 3;

    while (tocheck.x < ((cell.x / 3) * 3) + 3)
    {
        while (tocheck.y < ((cell.y / 3) * 3) + 3)
        {
            if (grid[tocheck.x][tocheck.y] == grid[cell.x][cell.y])
                return (0);
            (tocheck.y)++;
        }
        (tocheck.x)++;
    }
    return (1);
}

int all_ok(char **grid, t_pt cell)
{
    return (col_ok(grid,cell) && line_ok(grid,cell) && cube_ok(grid,cell));
}