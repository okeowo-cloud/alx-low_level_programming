#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function prints a name
 * @name: is a pointer to name string
 * @f: is a pointer to function
 * Return: is void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
