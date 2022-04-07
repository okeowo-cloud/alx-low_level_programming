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

	if (min > max) /* validate arguments */
		return (NULL);

	range = (max - min) + 1; /* size of array */

	ptr = malloc(sizeof(int) * range); /* allocate memory */

	if (ptr == NULL) /* validate memory was allocated or not */
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++) /* assign from min to max */
		ptr[j] = i;

	return (ptr);
}
