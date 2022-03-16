#include <stdio.h>

/**
 * main - program computes and prints the sum
 * of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum = 0;

	while (sum < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
			if (sum < 1024)
			{
				printf("%d\n", sum);
			}
		}
		i++;
	}
	return (0);
}
