#include "sudoku.h"

int validate_input_characters(int argc, char **argv)
{
    int i;
    
    i = 0;
    while (*argv)
    {
        i = 0;
        while ((*argv)[i])
        {
            if (!(((*argv)[i] >= '1' && (*argv)[i] <= '9') || (*argv)[i] == '.'))
                /* INVALID INPUT */ return (0);
            i++;
        }
        (*argv)++;
    }
}

int validate_input_size(int argc, char **argv)
{
    return (!(argc != 9));
}

int validate_input(int argc, char **argv)
{
    return (validate_input_characters(int argc, char **argv) && validate_input_size(int argc, char **argv));
}