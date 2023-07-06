#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @str: string
 *
 * Return: the number of character in a string except '\0'
 */

unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	for ( ; str[len]; len++)
		;
	return (len);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL or contains character other
 * than 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int nbr = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b) - 1;

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			nbr += (1 << len);

		len--;
	}
	return (nbr);
}
