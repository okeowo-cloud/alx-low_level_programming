#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - program prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: pointer to array
 * @size: is an int
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i, max;

	i = sum1 = sum2 = 0;
	max = size * size;

	while (i < max)
	{
		sum1 += a[i];
		i = i + size + 1;
	}

	i = size - 1;
	while (i < (max - 1))
	{
		sum2 += a[i];
		i = i + (size - 1);
	}

	printf("%d, %d\n", sum1, sum2);
}
