#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Program assign a random number
 * to the variable n each time it is executed.
 * prints "is positive" if number > 0.
 * prints "is negative" if number < 0.
 * prints "is zero" if number = 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int  n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else
		if (n < 0)
			printf("%d is negative\n", n);
		else
			printf("0 is zero\n");
	return (0);
}
