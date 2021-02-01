#include "sudoku.h"

int col_ok(char **grid, t_pt cell)
{
    t_pt cursor;

    cursor.x = 0;
    cursor.y = cell.y;
    while (cursor.x < 9)
    {
        if (grid[cursor.x][cursor.y] == grid[cell.x][cell.y] && cursor.x != cell.x)
            return (0);
        (cursor.x)++;
    }
    return (1);
}

int line_ok(char **grid, t_pt cell)
{
    t_pt cursor;

    cursor.x = cell.x;
    cursor.y = 0;
    while (cursor.y < 9)
    {
        if (grid[cursor.x][cursor.y] == grid[cell.x][cell.y] && cursor.y != cell.y)
            return (0);
        (cursor.y)++;
    }
    return (1);
}

int cube_ok(char **grid, t_pt cell)
{
    t_pt cursor;

    cursor.x = (cell.x / 3) * 3;
    cursor.y = (cell.y / 3) * 3;

    while (cursor.x < ((cell.x / 3) * 3) + 3)
    {
        while (cursor.y < ((cell.y / 3) * 3) + 3)
        {
            if (grid[cursor.x][cursor.y] == grid[cell.x][cell.y] && (cursor.x != cell.x || cursor.y != cell.y))
                return (0);
            (cursor.y)++;
        }
        (cursor.x)++;
    }
    return (1);
}

int all_ok(char **grid, t_pt cell)
{
    return (col_ok(grid,cell) && line_ok(grid,cell) && cube_ok(grid,cell));
}