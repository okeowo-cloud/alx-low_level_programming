#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function prints numbers, followed by a new line.
 * @separator: is a pointer to delimiter
 * @n: is an integer
 * Return: Always void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	const char *s = separator;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && s != NULL)
			printf("%s", s);
		i++;
	}
	printf("\n");
	va_end(args);
}
