#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 *
 */

void print_alphabet_x10(void)
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
