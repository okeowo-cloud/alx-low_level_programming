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

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}
