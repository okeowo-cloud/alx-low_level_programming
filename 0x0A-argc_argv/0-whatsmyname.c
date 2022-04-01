#include "main.h"
#include <stdio.h>

/**
 * main - program prints its name
 * @argc: count of arguments
 * @argv: pointer to argument vector
 * Return: is always 0.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
