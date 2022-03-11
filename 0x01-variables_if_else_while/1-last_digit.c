#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Program assign a random number
 * to the variable n each time it is executed.
 * program output  string Last digit of, followed by
 * n , followed by:
 * and is greater than 5 - if last digit is 5
 * and is 0 - if last digit is 0
 * and is less than 6 and not 0 if last digit
 * is less than 6 and not 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	int lastDigit;

	char output_greater_than_5[] = "Last digit of %d is %d and is greater than 5\n";

	char output_equalto_zero[] = "Last digit of %d is %d and is 0\n";

	char output_lessthan_6[] = "Last digit of %d is %d and is less than 6 and not 0\n";

	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
		printf(output_greater_than_5, n, lastDigit);
	else
		if (lastDigit == 0)
			printf(output_equalto_zero, n, lastDigit);
		else
			if (lastDigit < 6 && lastDigit != 6)
				printf(output_lessthan_6, n, lastDigit);
	return (0);
}
