#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring.
 * @s: is a pointer to string
 * @accept: is a pointer to substring
 * Return: is an integer.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	int counter = 0;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				counter++;
				break;
			}

			if (*(accept + j + 1) == '\0' && *(s + i) != *(accept + j))
				return (counter);
		}
		i++;
	}
	return (counter);
}
