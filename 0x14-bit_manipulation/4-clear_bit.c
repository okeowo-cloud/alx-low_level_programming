#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index.
 * @n: is a long
 * @index: is an int
 * Return: 1 if it worked, 0 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bit = 0, trl = 1;

	max_bit = (sizeof(unsigned long int) * 8);

	if (index > max_bit)
		return (-1);

	trl = ~(trl << index);
	*n = (*n & trl);

	return (1);
}
