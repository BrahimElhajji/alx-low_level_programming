#include "main.h"

/**
 * free_grid - function that frees 2dimensional grid created by alloc_grid
 * @grid: pointer to pointer
 * @height: the height of the grid
 * Return: grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
