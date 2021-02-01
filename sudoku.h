#ifndef SUDOKU_H
# define SUDOKU_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_pt
{
  int x,y;
} t_pt;

void free_svargv(char **sv_argv);
int line_ok(char **grid, t_pt cell);
int col_ok(char **grid, t_pt cell);
int cube_ok(char **grid, t_pt cell);
int all_ok(char **grid, t_pt cell);
void display(char **grid);
void error(char *error_message);
void success(char *success_message);
t_pt    find_next_cell(char **grid, t_pt start);
int isInBound(t_pt cell);
int backtracking(char **grid, t_pt cell);
int validate_input_characters(char **argv);
int validate_input_length(char **argv);
int validate_input_size(int argc);
int validate_input(int argc, char **argv);
void parsing(char **argv, char **grid);

#endif