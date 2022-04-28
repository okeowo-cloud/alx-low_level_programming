#include "main.h"

/**
 * print_binary - function prints the binary representation of a number.
 * @n: isa number
 * Return: is always void
 */

void print_binary(unsigned long int n)
{
	unsigned long int n_copy = n, trl = 1;

	int len = 0;

	while (n_copy > 0)
	{
		len++;
		n_copy >>= 1;
	}
	len -= 1;

	if (len > 0)
		trl = trl << len;

	while (trl > 0)
	{
		if (n & trl)
			_putchar('1');
		else
			_putchar('0');

		trl >>= 1;
	}
}
