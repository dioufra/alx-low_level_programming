#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int nbr = n;
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (nbr > 0)
	{
		len++;
		nbr >>= 1;
	}
	len -= 1;

	while (len >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}
