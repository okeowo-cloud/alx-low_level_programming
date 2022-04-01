#include "main.h"
#include <stdio.h>

/**
 * main - program prints the number of arguments passed to it
 * @argc: is the number of arg
 * @argv: is a pointer to a string vector.
 * Return: is always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
