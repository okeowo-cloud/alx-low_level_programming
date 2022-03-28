#include "main.h"

/**
 * _memset - function fills memory with a constant byte.
 * @s: pointer to a string
 * @b: is a char
 * @n: unsigned int
 * Return: pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
			*(s + i) = b;
	}
	return (s);
}
