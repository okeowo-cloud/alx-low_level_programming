#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function sum of all its parameters.
 * @n: is an integer
 * Return: is an integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum = 0;

	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int number = va_arg(args, int);

		sum += number;
	}

	va_end(args);

	return (sum);
}
