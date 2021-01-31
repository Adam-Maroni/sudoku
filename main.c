#include "sudoku.h"

int main(int argc, char **argv)
{
    char **grid = NULL;
    t_pt first_cell;

    if (validate_input(argc, argv))
        grid = parsing(argv);
    else
        error("Invalid_input");
    display_grid(grid);
    first_cell = find_next_cell(grid);
    if (isInBound(first_cell) == 0)
        error("No cell to start by");
    if (backtracking(grid, first_cell) == 1)
    {
        display_grid(grid);
        success("Found solution");
    }
    else
        error("No solution found");
}