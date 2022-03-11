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
	int n, lastDigit;

	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of %d is %d ", n, lastDigit);

	if (lastDigit > 5)
		printf("and is greater than 5\n");
	else if (lastDigit == 0)
		printf("and is 0\n");
	else if (lastDigit < 6 && lastDigit != 6)
		printf("and is less than 6 and not 0\n");
	return (0);
}
