#include "sudoku.h"

int main(int argc, char **argv)
{
    char **grid = NULL;
    t_pt first_cell;

    if (validate_input(argc, argv))
    {
        int i; 

        i = -1;
        grid = (char**)malloc(sizeof(char*) * 9);
        while (++i < 9)
            grid[i] = (char*)malloc(9 * sizeof(char));
        parsing(argv, grid);
    }
    else
        error("Invalid_input");
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