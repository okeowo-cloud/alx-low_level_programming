#include "main.h"

/**
 * print_triangle - function prints a triangle, followed by a new line.
 * @size: is an integer
 *
 * Return: Always void
 */

void print_triangle(int size)
{
	char ch = '#';

	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j >= 1; j--)
			{
				if (j <= i)
					_putchar(ch);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
