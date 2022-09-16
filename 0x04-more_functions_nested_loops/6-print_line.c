#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character _ shoul be printed
 * prints ony a newline if n is zero or less
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');

		n--;
	}
	_putchar('\n');
}
