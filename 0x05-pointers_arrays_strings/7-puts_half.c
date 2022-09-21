#include "main.h"

/**
 * puts_half - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: string to print
 */


void puts_half(char *str)
{
	int length = 0;
	int n = 0;

	while (*++str)
		length++;

	n = (++length % 2 == 0) ? length / 2 :
		(length - 1) / 2;


	str -= n;

	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
