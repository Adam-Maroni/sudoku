#include "sudoku.h"

void free_svargv(char **pt, int argc)
{
    int i;

    i = -1;
    while (++i < argc)
    {
        free(pt[i]);
        pt[i] = NULL;
        i++;
    }
    if (pt)
    {
        free(pt);
        pt = NULL;
    }
}


void free_grid(char **pt)
{
    int i;

    i = -1;
    while (++i < 9)
    {
        free(pt[i]);
        pt[i] = NULL;
        i++;
    }
    if (pt)
    {
        free(pt);
        pt = NULL;
    }
}