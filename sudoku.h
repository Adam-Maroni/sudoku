#ifndef SUDOKU_H
# define SUDOKU_H
# include <stdio.h>
# include <string.h>

typedef struct s_pt
{
  int x,y;
} t_pt;

int line_ok(char **grid, t_pt cell);
int col_ok(char **grid, t_pt cell);
int cube_ok(char **grid, t_pt cell);
int all_ok(char **grid, t_pt cell);
void display(char grid);
void error(char *error_message);
void success(char *success_message);
t_pt  find_next_cell(char grid[9][9]);
int isInBound(t_pt cell);
int backtracking(char **grid, t_pt cell);
void display_grid(char grid[9][9]);

#endif

