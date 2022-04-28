#include "main.h"

/**
 * set_bit - function sets the value of a bit to 0 at a given index.
 * @n: is a long
 * @index: is an int
 * Return: 1 id successful, 0 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int trl = 1;

	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);

	if (index > max_bits)
		return (-1);

	trl <<= index;

	*n = (*n | trl);

	return (1);
}
