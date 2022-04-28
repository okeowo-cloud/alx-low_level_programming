#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given index.
 * @n: is a long
 * @index: is an int
 * Return: is an integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bit;

	int bit;

	max_bit = (sizeof(unsigned long int) * 8);

	if (index > max_bit)
		return (-1);

	bit = ((n >> index) & 1);
	return (bit);
}
