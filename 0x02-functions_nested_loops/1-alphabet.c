#include "main.h"

/**
 * print_alphabet - function prints the
 * alphabets in lowercase.
 *
 * Return: void (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
