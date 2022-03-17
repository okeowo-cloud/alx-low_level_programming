#include "main.h"

/**
 * print_square - function prints a square, followed by a new line.
 * @size: is an integer
 *
 * Return: Always void.
 */

void print_square(int size)
{
	char ch = '#';

	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(ch);
			}
			_putchar('\n');
		}
	}
}
