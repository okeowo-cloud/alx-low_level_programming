#include "main.h"

/**
 * main - Program prints "_putchar"
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

	return (0);
}
