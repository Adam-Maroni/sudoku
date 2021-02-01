#include "sudoku.h"

void free_svargv(char **sv_argv)
{
    int i;

    i = 0;
    if (sv_argv[i])
    {
        free(sv_argv[i]);
        sv_argv[i] = NULL;
        i++;
    }
    if (sv_argv)
    {
        free(sv_argv);
        sv_argv = NULL;
    }

}