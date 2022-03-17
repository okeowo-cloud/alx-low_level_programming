#include "main.h"

/**
 * print_most_numbers - function prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line.
 *
 * Return: Always void.
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}