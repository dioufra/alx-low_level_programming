#include "main.h"

/**
 * puts2 - print every other character in a string starting with the first one
 * @str: pointer to the first character of the string
 *
 */
void puts2(char *str)
{
	int count = 0;

	while (*str)
	{
		if (count % 2 == 0)
			_putchar(*str);
		count++;
		str++;
	}
	_putchar('\n');
}
