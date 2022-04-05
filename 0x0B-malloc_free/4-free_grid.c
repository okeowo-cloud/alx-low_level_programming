#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: pointer to two dim
 * @height: is an integer
 * Return: Always void.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
