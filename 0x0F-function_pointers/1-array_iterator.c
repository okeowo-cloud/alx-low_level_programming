#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - function executes a function
 * given as a parameter on each element of an array.
 * @array: pointer to array
 * @size: is a size
 * @action: is a pointer to a function
 * Return: Always void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
