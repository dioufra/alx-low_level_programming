#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: argument
 */

void print_times_table(int n)
{
	int number;
	int multiplier;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');

			for (multiplier = 1; multiplier <= n; multiplier++)
			{
				_putchar(',');
				_putchar(' ');

				product = number * multiplier;

				if (product <= 99)
				{
					_putchar(' ');
				}

				if (product >= 100)
				{
					_putchar('0' + (product / 100));
					_putchar('0' + (product / 10) % 10);
				}

				else if (product >= 10 && product <= 99)
				{
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				_putchar('\n');
			}
		}
	}
}


