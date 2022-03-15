#include "main.h"

/**
 * print_last_digit - function prints the last digit
 * of a number.
 * @n: n is a digit of variable length.
 *
 * Return: Always the last digit.
 */
int print_last_digit(int n)
{
	int r;

	r = (n % 10);

	if (r < 0)
	{
		r = (-1 * r);
	}
	_putchar('0' + r);
	return (r);
}
