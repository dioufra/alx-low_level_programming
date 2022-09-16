#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int counter;
	int c;
	
	counter = 10;

	while (counter--)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar('0' + (c / 10));
			}
			_putchar('0' + (c % 10));
		}
		_putchar(10);
	}
}
