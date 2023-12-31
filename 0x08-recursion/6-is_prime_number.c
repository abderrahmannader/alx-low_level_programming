#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - integer
 * @n: number
 *
 * Return: 1 prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime
 * @n: number
 * @i: iterator
 *
 * Return: 1 prime, 0 not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
