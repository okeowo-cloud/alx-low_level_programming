#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program prints the multiplication of two arguments
 * @argc: count of program args
 * @argv: pointer to argument array
 * Return: is always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
