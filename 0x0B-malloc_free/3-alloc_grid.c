#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function allocates memory to dimensional array of integers.
 * @width: is an integer
 * @height: is an integer
 * Return: is a pointer to a two dim array
 */

int **alloc_grid(int width, int height)
{
	int **grid;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
