#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int n = 612852475143;

	long int div = 2;

	long int maxFactor;

	while (n != 0)
	{
		if (n % div != 0)
		{
			div = div + 1;
		}
		else
		{
			maxFactor = n;
			n = n / div;
			if (n == 1)
			{
				printf("%lu\n", maxFactor);
				break;
			}
		}
	}
	return (0);
}
