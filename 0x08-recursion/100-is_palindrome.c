#include "main.h"

/**
 * c1 - function check for pallindrome.
 * @s: is a pointer to string
 * @l: is an integer
 * Return: is an integer
 */

int c1(char *s, int l)
{
	if (l < 1)
		return (1);

	if (*s == *(s + l))
		return (p1(s + 1, l - 2));
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string.
 * Return: integer.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
