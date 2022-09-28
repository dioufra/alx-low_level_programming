#include "main.h"

/**
 * _pow_recursion - raise the value of x to the power of y
 * @x: number
 * @y: power to raise to
 *
 * Return: x to the power of y
 * if x less than 0, return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

