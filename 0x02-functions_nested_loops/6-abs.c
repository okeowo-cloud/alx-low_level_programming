#include "main.h"

/**
 * _abs - function computes the absolute value of an integer.
 * @n: is a signed integer.
 *
 * Return: Always positive integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
