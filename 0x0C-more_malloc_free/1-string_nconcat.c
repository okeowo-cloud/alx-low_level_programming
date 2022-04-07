#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concats two strings
 * @s1: is a pointer to string
 * @s2: is a pointer to string
 * @n: is an integer
 * Return: is a pointer to concated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	if ((int) n < len2)
		len1++;

	ptr = malloc(sizeof(char) * (len1 + n));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];

	for (j = 0; j < (int) n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	if ((int) n < len2)
		ptr[i] = '\0';
	return (ptr);
}
