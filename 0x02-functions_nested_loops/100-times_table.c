#include "main.h"

/**
 * print_times_table - function print the n times table
 * starting with 0
 * @n: n is an integer
 *
 * Return: Always void.
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 1; j <= n; j++)
			{
				r = (i * j);
				if ((r / 10) > 0 && r < 100)
					_putchar((r / 10) + '0');
				else if (r < 100)
					_putchar(' ');
				if (r >= 100)
				{

					_putchar((r / 100) + '0');
					r = r % 100;
					_putchar((r / 10) + '0');
					r = r % 10;
					_putchar(r + '0');
				}
				else
				{
					_putchar((r % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
