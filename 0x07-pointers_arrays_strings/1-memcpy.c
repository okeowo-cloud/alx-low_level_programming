#include "main.h"

/**
 * _memcpy - function copies memory area.
 * @dest: pointer to destination
 * @src: pointer to string
 * @n: is an integer.
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(dest + i) = *(src + i);
	}
	return (dest);
}
