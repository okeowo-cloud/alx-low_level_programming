#include "main.h"

/**
 * puts2 - function prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: is a string
 * Return: Always void.
 */

void puts2(char *str)
{
	int i = 0;

	char pl = str[0];

	while (pl != '\0')
	{
		if (i % 2 == 0)
		{
			pl = str[i];
			_putchar(pl);
		}
		i++;
	}
	_putchar('\n');
}
