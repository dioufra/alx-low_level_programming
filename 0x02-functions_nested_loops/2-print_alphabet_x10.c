#include "main.h"

/**
 * print_alpahbet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 *
 */

void print_alphabet_10x(void)
{
	char letter;
	int t;

	letter = 'a';
	t = 1;

	while (t <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		t++;
		_putchar('\n');
	}
}
