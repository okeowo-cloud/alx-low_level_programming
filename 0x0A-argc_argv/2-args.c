#include "main.h"
#include <stdio.h>

/**
 * main - program prints all arguments it receives.
 * @argc: count of program arguments
 * @argv: is a pointer to argument array.
 * Return: is always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc != i)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
