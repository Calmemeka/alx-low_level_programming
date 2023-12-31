#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid of array
 * @grid: the grid to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
