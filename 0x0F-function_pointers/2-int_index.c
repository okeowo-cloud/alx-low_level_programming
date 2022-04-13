#include <stdio.h>

/**
 * int_index - function searches for an integer.
 * @array: is a pointer to an int array
 * @size: size of array
 * @cmp: is a pointer to function
 * Return: is an int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
