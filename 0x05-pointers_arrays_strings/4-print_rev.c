#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int lenght = 0;
	int i;

	while (*s)
	{
		lenght++;
	}
	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(*s--);
	}
	_putchar('/n');
}

