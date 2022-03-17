#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz
 * multiples of five print Buzz
 * multiples of both three and five print FizzBuzz
 *
 * Return: Always 0.
 */

int main(void)
{
	char *f = "Fizz", *b = "Buzz", *fb = "FizzBuzz";

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i < 100)
		{
			if (i % 3 == 0)
				printf("%s ", f);
			else if (i % 5 == 0)
				printf("%s ", b);
			else if (i % 3 == 0 && i % 5 == 0)
				printf("%s ", fb);
			else
				printf("%d ", i);
		}
		else
		{
			if (i % 3 == 0)
				printf("%s\n", f);
			else if (i % 5 == 0)
				printf("%s\n", b);
			else if (i % 3 == 0 && i % 5 == 0)
				printf("%s\n", fb);
			else
				printf("%d\n", i);
		}
	}
	return (0);
}
