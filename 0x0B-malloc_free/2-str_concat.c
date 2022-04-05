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

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + i))
		len++, i++;
	i = 0;
	while (*(s2 + i))
		len++, i++;

	len++; /* for end of string char */

	concatedResult = malloc(sizeof(char) * len);

	if (concatedResult == NULL)
		return (NULL);

	i = 0;
	while (*(s1 + i))
	{
		*(concatedResult + i) = *(s1 + i);
		i++;
	}
	while (i < len)
	{
		*(concatedResult + i) = *(s2 + j);
		i++, j++;
	}
	return (concatedResult);

}
