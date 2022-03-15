#include "main.h"

/**
 * _islower - fuction checks for lowercase character
 * @c: single letter input or char.
 *
 * Return: 1 if c is lowercase or
 * 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
