#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: is a pointer to string.
 * Return: is a new pointer
 */

char *_strdup(char *str)
{
	char *s;

	int i, counter = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		counter++, i++;

	counter++;

	s = malloc(sizeof(char) * counter);

	if (s == NULL)
		return (NULL);

	i = 0;

	while (i < counter)
	{
		*(s + i) = *(str + i);
		i++;
	}
	return (s);
}
