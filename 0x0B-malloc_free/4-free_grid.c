#include "main.h"

/**
 * free_grid - Frees a 2D grid
 * @grid: pointer
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int *grid;
	int h;
	h = 0;
	while (h < height)
	{
		grid[h];
		h++;
		free(grid[h]);
	}
	free(grid);
}
