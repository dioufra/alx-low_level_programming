#include "main.h"

/**
 * print_numbers - function that prints the number (0-9)
 * followed by a new line
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
