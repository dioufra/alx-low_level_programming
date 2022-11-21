#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: integer
 */
void print_times_table(int n)
{
	int rw;
	int col;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (rw = 0; rw <= n; rw++)
		{
			for (col = 0; col <= n; col++)
			{
				product = (rw * col);
				if (col == 0)
					_putchar('0' + product);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + product);
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar('0' + (product / 10));
						_putchar('0' + (product % 10));
					}
					else if (product >= 100)
					{
						_putchar('0' + (product / 100));
						_putchar('0' + ((product / 10) % 10));
						_putchar('0' + (product % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}

