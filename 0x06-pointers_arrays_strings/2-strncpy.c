#include "main.h"

/**
 * *_strncpy - function copy a string
 * @dest: is a pointer to a string
 * @src: is a pointer to a string
 * @n: is an integer
 * Return: a pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
