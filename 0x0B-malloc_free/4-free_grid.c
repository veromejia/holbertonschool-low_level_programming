#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees memory from grid
 *@grid: grid 
 *@height: height of the grid;
 *Return: always 0
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
