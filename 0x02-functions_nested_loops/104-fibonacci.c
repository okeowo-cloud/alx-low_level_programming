#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - program prints the first 98 Fibonacci numbers,
 * starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int fwd1 = 0, bck1 = 1, fwd2 = 0, bck2 = 2;

	unsigned long int hd1, hd2, hd3;

	int count;

	printf("%lu, %lu, ", bck1, bck2);
	for (count = 2; count < 98; count++)
	{
		if (bck1 + bck2 > LARGEST || fwd1 > 0 || fwd2 > 0)
		{
			hd1 = (bck1 + bck2) / LARGEST;
			hd2 = (bck1 + bck2) % LARGEST;
			hd3 = fwd1 + fwd2 + hd1;
			fwd1 = fwd2, fwd2 = hd3;
			bck1 = bck2, bck2 = hd2;
			printf("%lu%010lu", fwd2, bck2);
		}
		else
		{
			hd2 = bck1 + bck2;
			bck1 = bck2, bck2 = hd2;
			printf("%lu", bck2);
		}
		if (count != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
