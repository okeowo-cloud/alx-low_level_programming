#include "main.h"

/**
 * print_line - function draws a straight line in the terminal.
 * @n: is an integer.
 *
 * Return: Always void
 */

void print_line(int n)
{
	int i;

	char ch = '_';

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
