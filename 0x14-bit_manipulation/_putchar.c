#include "unistd.h"

/**
 * _putchar - prints a char at a time
 * @c: is a char
 * Return: is an integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
