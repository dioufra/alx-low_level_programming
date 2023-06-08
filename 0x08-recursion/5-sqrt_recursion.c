#include "main.h"

/**
 * _sqrt - return the square root of a number using an iterator
 * @n: number
 * @i: iterator
 *
 * Return: i or -1
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqrt(n, i + 1));
	else
		return (-1);
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 *
 * Return: -1 if number does not have a natural square root,
 * otherwise the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 2));
}
