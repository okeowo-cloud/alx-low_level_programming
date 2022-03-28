#include "main.h"

/**
 * _strchr - function locates the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 * @s: is a pointer to string
 * @c: is a character
 * Return: a pointer to the first occurence of character.
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int *p;

	while (*(s + i) != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}
	return (p);
}
