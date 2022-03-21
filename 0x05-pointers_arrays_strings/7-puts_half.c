#include "main.h"

/**
 * puts_half - function print the second half of the string.
 * @str: is a string.
 *
 * Return: Always void
 */

void puts_half(char *str)
{
	int length = 0, i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	if (length % 2 != 0)
		n = (length + 1) / 2;
	else
		n = length / 2;
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
