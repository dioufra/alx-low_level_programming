#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: number of iteration
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == n)
		{
			_putchar('\\');
		}
		else
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
