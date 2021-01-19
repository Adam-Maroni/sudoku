#ifndef SUDOKU_H
# define SUDOKU_H
# include <stdio.h>

int backtracking(char **grid, t_pt point);
int line_ok(char **grid, t_pt cell);
int col_ok(char **grid, t_pt cell);
int cube_ok(char **grid, t_pt cell);
int all_ok(char **grid, t_pt cell);
void display(char grid);

typedef struct s_pt
{
  int x,y;
} t_pt;
#endif