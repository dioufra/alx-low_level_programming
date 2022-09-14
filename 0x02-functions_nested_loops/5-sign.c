#include "main.h"

/*
 * print_sign - print the sign of a number
 * @n: character to check
 * Return: 1 if positive, 0 if zero, and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');
}
