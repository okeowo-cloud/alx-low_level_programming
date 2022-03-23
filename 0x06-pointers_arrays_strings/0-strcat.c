#include "main.h"

/**
 * *_strcat - function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: is a pointer to a string
 * @src: is a pointer to a string
 * Return: returns a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; ++i)
		continue;

	for (j = 0; *(src + j) != '\0'; ++i, ++j)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';
	return (dest);
}
