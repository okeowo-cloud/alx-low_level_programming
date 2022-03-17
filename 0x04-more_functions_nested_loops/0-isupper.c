#include "main.h"
#include <stdio.h>

/**
 * _isupper - function checks for uppercase character.
 * @c: is an int
 *
 * Return: 1 if uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
