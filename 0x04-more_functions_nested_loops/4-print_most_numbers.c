#include "main.h"

/**
 * print_most_numbers - function that prints numbers from 0 to 9
 * except for 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
		{
			_putchar('0' + c);
		}

		c++;
	}
	_putchar('\n');
}
