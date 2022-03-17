#include "main.h"

/**
 * print_numbers - function prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: Always void.
 */

void print_numbers(void)
{
	char ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
