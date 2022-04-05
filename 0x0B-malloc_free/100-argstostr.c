#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function concatenates all the arguments of the program.
 * @ac: is an integer
 * @av: is a pointer
 * Return: is a pointer.
 */

char *argstostr(int ac, char **av)
{
	char *result;

	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* count end of char */
	}
	len++; /* to accomodate additional end of line char */

	result = malloc(len * sizeof(char));

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (i = j = k = 0; k < len; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			result[k] = '\n';
			i++, k++;
			j = 0;
		}
		if (k < len - 1)
			result[k] = av[i][j];
	}
	result[k] = '\0';
	return (result);
}
