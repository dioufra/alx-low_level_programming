#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ls *= -1;
	}

	_putchar('0' + ld);
	return (ld);
}
