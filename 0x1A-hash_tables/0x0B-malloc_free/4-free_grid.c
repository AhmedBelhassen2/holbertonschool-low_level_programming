#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - frees a 2 dimensional grid
 *@grid: array created by integers
 *@height: heigh-t of array
 */
void free_grid(int **grid, int height)
{
int s;
for (s = 0; s < height; s++)
free(grid[s]);
free(grid);
}
