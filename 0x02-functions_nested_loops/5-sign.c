#include "main.h"

/**
 * print_sign - function prints the sign of a number.
 * prints "+" if n is greater than zero
 * prints "0" if n is zero
 * prints "-" if n is less than zero.
 * @n: n is a number.
 *
 * Return: returns 1 if greater than 0,
 * 0 if equal to zero
 * -1 if less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
