#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints anything.
 * @format: isa pointer to any type
 *
 * Return: Always void
 */

void print_all(const char * const format, ...)
{
	int i = 0;

	char *str, *p = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", p, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", p, str);
					break;
				default:
					i++;
					continue;
			}
			p = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
