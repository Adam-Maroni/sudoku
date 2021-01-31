#include "sudoku.h"

int validate_input_characters(char **argv)
{
    int i;
    char character;
    
    i = -1;
    while (++i < 10)
    {
        while((character = *(argv[i])))
            if (!(character >= '1' && character <= '9')  && (character != '.'))
                return (0);
    }
    return (1);
}

int validate_input_length(char **argv)
{
    int i;

    i = -1;
    while (++i < 10)
        if (strlen(argv[i]) != 9)
            return (0);
    return (1);
    
}

int validate_input_size(int argc)
{
    return (argc == 10);
}

int validate_input(int argc, char **argv)
{
    return(validate_input_size(argc) && validate_input_length(argv) && validate_input_characters(argv));
}