#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int t;

	for (t = 1; t <= 10; t++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
