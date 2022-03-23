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

	int a, b;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			a = s1[i];
			b = s2[i];
			result = a - b;
			break;
		}
		++i;
	}
	return (result);
}
