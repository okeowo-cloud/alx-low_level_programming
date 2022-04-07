#include "main.h"


/**
 * malloc_checked - function allocates memory.
 * @b: is positive integer
 * Return: is a pointer to void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr; /* declare a pointer to void */

	ptr = malloc(b); /* allocate memory to address using malloc */

	if (ptr == NULL) /* exit if memory wasn't allocated */
		exit(98);

	return (ptr); /* return the pointer to allocated memory */
}
