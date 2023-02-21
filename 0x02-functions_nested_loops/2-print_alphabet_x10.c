#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		char letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		count++;
	}
}
