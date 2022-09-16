#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * if n is less or equal to zero print \n
 */

void print_diagonal(int n)
{
	int bs;
	int space;

	if (n > 0)
	{
		for (bs = 1; bs <= n; bs++)
		{
			for (space = 1; space < bs; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
