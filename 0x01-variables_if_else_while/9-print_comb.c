#include <stdio.h>
#include <stdio.h>

/**
 * main - Program prints all possible
 * combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
