#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: table to print
 */
void print_times_table(int n)
{
	int i, j, res, nres;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				nres = i * (j + 1);

				if (res <= 9)
					_putchar(res + '0');
				else if (res < 100)
				{
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					if (nres <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (nres < 100)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
