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

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(s + i) = b;
	}
	return (s);
}
