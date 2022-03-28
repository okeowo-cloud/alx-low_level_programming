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
	int i, j;

	int counterA = 0, counterB = size - 1;

	int d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i + counterA)
				d1 += (*(a[i] + j));

			if (j == counterB - i)
				d2 +=  (*(a[i] + j));
		}
		counterA++, counterB--;
	}
	printf("%d , %d\n", d1, d2);
}
