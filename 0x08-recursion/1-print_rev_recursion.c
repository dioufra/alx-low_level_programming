#include "main.h"

/**
 * _print_rev_recursion - Prints a string followed by a newline recursivly
 * @s: pointer to the address of the string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
