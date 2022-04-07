#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates a memory block using malloc and free
 * @ptr: is a pointer
 * @old_size: is an integer
 * @new_size: is an integer
 * Return: pointer to void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *realloc;

	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	realloc = malloc(sizeof(char) * new_size);
	if (realloc == NULL)
		return (ptr);

	if (ptr == NULL)
		return (realloc);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			*((char *) realloc + i) = *((char *) ptr + i);
		free(ptr);
	}
	else
	{
		for (i = 0; i < old_size; i++)
			*((char *) realloc + i) = *((char *) ptr + i);
		free(ptr);
	}
	return (realloc);
}
