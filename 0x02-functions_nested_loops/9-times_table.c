#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int col;
	int row;
	int res;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 0; col++)
		{
			res = col * row;

			if (col == 0)
			{
				_putchar('0' + res);
			}
			else if (res <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			}
			else if (res > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (res /10));
				_putchar('0' + (res % 10));
			}
		}
		_putchar('\n');
	}
}
