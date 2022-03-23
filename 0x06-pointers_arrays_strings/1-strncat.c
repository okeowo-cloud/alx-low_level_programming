#include "main.h"

/**
 * *_strncat - function concat two strings up to n bytes
 * @dest: is a pointer to string
 * @src: is a pointer to string
 * @n: is an integer
 * Return:return a pointer to the concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned long int i, dest_len;

	int j;

	for (i = 0; *(dest + i) != '\0'; ++i)
		continue;

	dest_len = i;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[dest_len + j] = src[j];

	dest[dest_len + j] = '\0';

	return (dest);
}
