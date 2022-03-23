#include "main.h"

/**
 * *leet - function encodes a string into 1337.
 * @c: is a pointer to string
 * Return: return a pointer to resulting string.
 */

char *leet(char *c)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (c[i] == a[j])
				c[i] = b[j];
		}
	}
	return (c);
}
