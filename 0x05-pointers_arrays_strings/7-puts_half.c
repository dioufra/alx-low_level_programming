#include "main.h"

/**
 * puts_half - prints a string, followed by a new line, to stdout.
 * @str: pointer to the address of the string
 */
void puts_half(char *str)
{
	int len = 0, i;
	while (*str)
	{
		len++;
		str++;
	}
	str -= len;
	if (len % 2 != 0)
		len++;
	for (i = len / 2; i < len ; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
