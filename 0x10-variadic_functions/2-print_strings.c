#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function prints strings, followed by a new line.
 * @separator: is a pointer to string
 * @n: is an int
 * Return: is always void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	const char *s = separator;

	unsigned int i;

	va_start(args, n);

	i = 0;

	while (i < n)
	{
		char *temp = va_arg(args, char *);

		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);

		if (i < n - 1 && s != NULL)
			printf("%s", s);
		i++;
	}
	printf("\n");
	va_end(args);
}
