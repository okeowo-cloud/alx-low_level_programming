#include "main.h"

/**
 * *string_toupper - function changes all lowercase
 * letters of a string to uppercase.
 * @c: is a pointer to string
 * Return: returns pointer to string.
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
