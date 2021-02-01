#include "sudoku.h"

void display(char **grid)
{
   int x; 
   int y; 

   x = -1;
   printf("\n");
   while (++x < 9)
   {
       y = -1;
       while (++y < 8)
           printf("%c ", grid[x][y]);
       printf("%c\n", grid[x][y]);
   }
   printf("\n");
}