#include "main.h"

/**
 * *_strcpy - function copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: is a pointer to a character array or string
 * @src: is a pointer to a character array or string
 * Return: Always void.
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (counter >= 0)
	{
		*(dest + counter) = *(src + counter);
		if (*(src + counter) == '\0')
			break;
		counter++;
	}
	return (dest);
}
