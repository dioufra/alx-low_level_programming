#include "main.h"

/**
 * _mul - returns the multipliers of a number
 *
 * @n: number
 * @i: iterator
 *
 * Return: 1 if n is prime, otherwise 0
 */
int _mul(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (_mul(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime or not
 *
 * @n: number
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_mul(n, 2));
}
