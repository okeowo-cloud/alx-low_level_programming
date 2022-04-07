#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array, using malloc.
 * @nmemb: is an integer
 * @size: is an integer
 * Return: is a pointer to void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	unsigned int i;

	if (nmemb == 0 || size == 0) /* validate arguments */
		return (NULL);

	ptr = malloc(nmemb * size); /* allocate memory */

	if (ptr == NULL) /* check if allocation occur or not */
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
		*((char *) ptr + i) = 0; /* set individual memb to zero and cast */

	return (ptr);
}
