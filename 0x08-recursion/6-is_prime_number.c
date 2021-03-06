#include "main.h"

/**
 * is_prime_number - function returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: is an integer
 * Return: is an integer
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (divisors(3, n));
}

/**
 * divisors - number is prime?
 * @n: is an integer
 * @m: is an integer
 * Return: 0 or 1
 */

int divisors(int n, int m)
{
	if (m % n == 0)
		return (0);
	else if (m / 2 > n)
		return (divisors(n + 2, m));
	else
		return (1);
}
