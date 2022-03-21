#include "main.h"

/**
 * _puts - function prints a string, followed by a new line, to stdout.
 * @str: is a pointer to a character array
 * Return: Always void.
 */

void _puts(char *str)
{
	int j = 1;

	char pl = str[0];

	while (pl != '\0')
	{
		_putchar(pl);
		pl = str[j++];
	}
	_putchar('\n');
}
