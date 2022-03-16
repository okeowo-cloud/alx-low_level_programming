#include <stdio.h>

/**
 * main - prints the sum of even fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	long sum = 0;

	long t1 = 1;

	long t2 = 2;

	long nextTerm = t1 + t2;

	if (t1 % 2 == 0)
		sum += t1;
	else if (t2 % 2 == 0)
		sum += t2;
	while (sum <= 4000000)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		if (t1 % 2 == 0)
			sum += t1;
		else if (t2 % 2 == 0)
			sum += t2;
	}

	printf("%ld\n", sum);
	return (0);
}
