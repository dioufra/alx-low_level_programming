#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string to print
 */


void puts2(char *str)
{
	while (*str)
	{
		if (*str)
			_putchar(*str);

		if (*++str == '\0')
			break;

		str++;
	}
	_putchar('\n');
}
