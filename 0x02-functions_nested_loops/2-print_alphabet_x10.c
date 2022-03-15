#include "main.h"

/**
 * print_alphabet_x10 - function prints 10x
 * the alphabet, in lowercase, followed by a newline
 *
 * Return: void (Success)
 */
void print_alphabet_x10(void)
{
	int i, ch;

	i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
