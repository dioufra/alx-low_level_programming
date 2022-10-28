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
	unsigned int num = 0, k = 0, len, i;

	if (b == NULL)
		return (num);

	for (len = 0; b[len]; len++)
		;
	
	k = len - 1;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			num += (1 * (1 << k));

		k--;
	}
	return (num);
}
