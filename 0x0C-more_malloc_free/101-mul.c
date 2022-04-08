#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - function multiplies two positive numbers.
 * @argc: is an integer
 * @argv: is a pointer
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j;

	unsigned long product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	product = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", product);
	return (0);
}
