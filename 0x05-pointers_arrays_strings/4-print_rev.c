#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: string to print
 */


void print_rev(char *s)
{
	int length_s = 0;
	int i;

	while (*s != '\0')
	{
		length_s++;
		++s;
	}

	s--;

	for (i = length_s; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
