#include "main.h"

/**
 * *rot13 - function encodes a string using rot13.
 * @c: is a pointer to a string
 * Return: pointer to rot13 generated string.
 */

char *rot13(char *c)
{
	char a[27] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f',
	 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm',
	 'M'};

	char b[27] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's',
	 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'z',
	 'Z'};

	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
				c[i] = b[j];

			else if (c[i] == b[j])
				c[i] = a[j];
		}
	}
	return (c);
}
