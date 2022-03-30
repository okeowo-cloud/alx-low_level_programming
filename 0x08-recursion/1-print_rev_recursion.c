#include "main.h"

/**
 * _print_rev_recursion - function prints a string in reverse.
 * @s: is a pointer to string.
 * Return: is always void.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
