#include "main.h"

/**
 * reverse_array - function reverses an array
 * @a: is a pointer to an array
 * @n: is an integer.
 * Return: Always void.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	n--;

	for (i = 0; i <= n; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
