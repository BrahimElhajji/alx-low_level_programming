#include "main.h"

/**
 * alloc_grid - function that returns pointer to 2dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: g
 */

#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **g, i, b;

	if (width <= 0 || height <= 0)
		return (0);

	g = malloc(sizeof(int *) * height);

	if (g == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);

		if (g[i] == 0)
		{
			for (b = 0; b < i; b++)
			{
				free(g[b]);
			}
			free(g);
			return (0);
		}

		for (b = 0; b < width; b++)
			g[i][b] = 0;
	}

	return (g);
}
