#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @str: string to reverse
 */

void rev_string(char *str)
{
	int i = 0;
	int length = 0;

	while (*++str)
		length++;

	char tmp[length];

	str -= length + 1;

	while (length >= 0)
		*(tmp + i++) = *(str + length--);
	*(tmp + i) = '\0';

	i = 0;
	while (tmp[i] != '\0')
		*str++ = tmp[i++];
}
