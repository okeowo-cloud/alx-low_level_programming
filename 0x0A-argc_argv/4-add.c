#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program adds positive numbers.
 * @argc: count of program args.
 * @argv: is a pointer to argument arrays.
 * Return: is always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	int i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]))
			{
				continue;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
