#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function concatenates two strings.
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: is a new pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len = 0;

	char *concatedResult;

	while (*(s1 + i) != '\0')
		len++, i++;

	len++; /* for space between concatenated strings */

	while (*(s2 + i) != '\0')
		len++, i++;

	len++; /* for end of string char */

	if (len == 0)
		return (NULL);

	concatedResult = malloc(sizeof(char) * len);

	if (concatedResult == NULL)
		return (NULL);

	i = 0;

	while (*(s1 + i))
	{
		*(concatedResult + i) = *(s1 + i);
		i++;
	}

	*(s1 + i) = ' ';

	while (*(s2 + j))
	{
		*(concatedResult + i) = *(s2 + j);
		i++, j++;
	}
	*(concatedResult + i) = '\0';
	return (concatedResult);

}
