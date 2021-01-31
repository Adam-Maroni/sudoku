#include "sudoku.h"

void error(char *error_message)
{
    printf("%s\n", error_message);
    exit(EXIT_FAILURE);
}

void success(char *success_message)
{
    printf("%s\n",success_message);
    exit(EXIT_SUCCESS);
}