#include "sudoku.h"

int main(int argc, char **argv)
{
    char **grid = NULL;
    t_pt first_cell;
    t_pt next_cell;
    char **sv_argv;
    int i;

    sv_argv = (char**)malloc(argc * sizeof(char*));
    i = -1;
    while (++i < argc)
        sv_argv[i] = strdup(argv[i]);

    if (validate_input(argc, argv))
    {
        grid = (char**)malloc(sizeof(char*) * 9);
        i = -1;
        while (++i < 9)
            grid[i] = (char*)malloc(9 * sizeof(char));

        parsing(sv_argv, grid);
    }
    else
    {
        free_svargv(sv_argv, argc);
        error("Invalid_input");
    }
    display(grid);
    first_cell.x = first_cell.y = 0;
    next_cell = find_next_cell(grid, first_cell);
    if (!isInBound(next_cell))
    {
        free_svargv(sv_argv, argc);
        free_grid(grid);
        error("No cell to start by");
    }
    if (backtracking(grid, next_cell) == 1 && grid_ok(grid))
    {
        display(grid);
        free_svargv(sv_argv, argc);
        free_grid(grid);
        success("Found solution");
    }
    else
    {
        free_svargv(sv_argv, argc);
        free_grid(grid);
        error("No solution found");
    }
}