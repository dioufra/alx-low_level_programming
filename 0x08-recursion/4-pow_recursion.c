#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 *
 * @x: number
 * @y: power
 *
 * Return: -1 if y is lower than 0, otherwise returns x to the power of y
 */

int _pow_recursivion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return x * pow_recursion(x, y - 1);
}
