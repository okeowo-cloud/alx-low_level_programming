#include "main.h"

/**
 * print_diagonal - function draws a diagonal line on the terminal.
 * @n: is an integer.
 *
 * Return: Always void
 */

void print_diagonal(int n)
{
	int i, j;

	char ch = '\\';

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(ch);
			_putchar('\n');
		}
	}
}
