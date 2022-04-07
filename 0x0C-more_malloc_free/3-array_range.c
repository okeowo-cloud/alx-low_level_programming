#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of integers
 * @min: is an integer
 * @max: is an integer
 * Return: is a pointer
 */

int *array_range(int min, int max)
{
	int *ptr;

	int i, j, range;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	ptr = malloc(sizeof(int) * range);

	if (ptr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		ptr[j] = i;

	return (ptr);
}
