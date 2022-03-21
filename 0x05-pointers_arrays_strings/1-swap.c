#include "main.h"

/**
 * swap_int - function swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
