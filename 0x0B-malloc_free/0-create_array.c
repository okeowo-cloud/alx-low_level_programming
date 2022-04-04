#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function creates an array of chars,
 * and initializes it with a specific char.
 * @size: is an integer
 * @c: is a char
 * Return: is a pointer
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;

	char *s;

	s = malloc(sizeof(char) * size);

	if (size <= 0)
		return (NULL);

	if (s == NULL)
		return (NULL);

	while (i < (int) size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
