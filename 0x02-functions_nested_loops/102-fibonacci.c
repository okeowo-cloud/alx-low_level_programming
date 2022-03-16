#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	
	long t1 = 1;

	long t2 = 2;

	long nextTerm = t1 + t2;

	printf("%d, %d, ", t1, t2);
	for (i = 3; i < 51; i++)
	{
		if (i == 50)
			printf("%d", nextTerm);
		else
		{
			printf("%d, ", nextTerm);
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1 + t2;
		}
	}
	putchar('\n');
	return (0);
}
