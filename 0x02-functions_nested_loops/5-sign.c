#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to print the sign
 *
 * Return: 1 if number is greater than zero
 * If number is zero, return 0
 * If number is less than zero, return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
