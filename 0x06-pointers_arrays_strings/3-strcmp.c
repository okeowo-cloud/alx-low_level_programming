#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: an integer.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0;

	unsigned long int a = 0, b = 0;

	int j, k;

	for (j = 0; s1[j] != '\0'; j++)
		a += s1[j];

	for (k = 0; s2[k] != '\0'; k++)
		b += s2[k];

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			result = a - b;
			break;
		}
		++i;
	}
	return (result);
}
