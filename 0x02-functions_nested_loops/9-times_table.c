#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, res, nres;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			nres = i * (j + 1);

			if (res <= 9)
			{
				_putchar(res + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				if (nres <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
