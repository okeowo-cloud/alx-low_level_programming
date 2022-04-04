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

	int i, j, counter = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		counter++;
		i++;
	}

	counter++;

	s = malloc(sizeof(char) * counter);

	if (s == NULL)
		return (NULL);

	while (j < counter)
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
