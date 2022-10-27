#include "main.h"

/**
 * binary_to_uint - Converts a number from binary to unsigned int
 *
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == 48 || b[i] == 49)
	{
		num <<= 1;
		num += b[i] - 48;
		i++;
	}

	return (num);
}
