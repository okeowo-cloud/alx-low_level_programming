#include "main.h"

/**
 * factorial - function returns the factorial of a given number.
 * @n: is an integer.
 * Return: is an integer.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
