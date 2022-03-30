#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string.
 * @s: pointer to a string.
 * Return: the length of string as integer.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
