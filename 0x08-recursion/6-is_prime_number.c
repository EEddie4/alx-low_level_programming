#include "main.h"

/**
 * is_prime_number - checks if a number is prime.
 * @n: number to check.
 * Return: 0 if not a prime number and
 * 1 if a prime number.
 */
int is_prime_number(int n)
{
	int div = 2;
	if (n <= 1)
	{
		return (0);
	}
	if (n > 1)
	{
		return (1);
	}
	return (_divisible(n, div));
}
