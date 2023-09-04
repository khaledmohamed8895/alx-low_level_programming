#include "main.h"

/**
 * free_grid - free th grid
 * @grid: grid of memory
 * @height: integer parameter
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

