#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * free_grid - frees 2D grid previously held by alloc_grid function
  * @grid: 2d grid
  * @height: height of grid
  *
  */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
