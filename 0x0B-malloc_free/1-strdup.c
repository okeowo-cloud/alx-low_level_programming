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

	int i;

	if (str == NULL)
		return (NULL);

	if (s == NULL)
		return (NULL);

	i = 0;

	while (*(str + i) != '\0')
	{
		*(s + i) = *(str + i);
		i++;
	}
	*(s + i) = '\0';
	return (s);
}
