#include <stdio.h>

/**
 * print_array - function prints n elements of an
 * array of integers, followed by a new line.
 * @a: integer array
 * @n: is an integer.
 * Return: Always void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i == (n - 1))
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
}
