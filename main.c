#include "sudoku.h"

int main(int argc, char **argv)
{
    char **grid = NULL;
    t_pt first_cell;
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
        free_svargv(sv_argv);
        error("Invalid_input");
    }
    display(grid);
    first_cell = find_next_cell(grid);
    if (isInBound(first_cell) == 0)
        error("No cell to start by");
    if (backtracking(grid, first_cell) == 1)
    {
        display(grid);
        success("Found solution");
    }
    else
        error("No solution found");
}