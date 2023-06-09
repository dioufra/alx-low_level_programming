#include "main.h"

/**
 * _puts - prints a string followed by a newline
 *
 * @str: pointer to the address of a string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

