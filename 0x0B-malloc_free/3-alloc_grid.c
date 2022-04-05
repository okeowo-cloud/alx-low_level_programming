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
	int **grid, i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * width * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
