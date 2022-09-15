#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int number;
	int multiplier;
	int product;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiplier = 1; multiplier <= 0; multiplier++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiplier;

			if (product <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('0' + (product / 10));
			}
			_putchar('0' + (product % 10));
		}
		_putchar('\n');
	}
}
