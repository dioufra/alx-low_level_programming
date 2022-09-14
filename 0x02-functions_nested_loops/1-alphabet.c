#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n')
}
