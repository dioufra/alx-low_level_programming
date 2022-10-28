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
	unsigned int num = 0, k = 1, len;
	int idx;

	for (len = 0; b[len]; len++)
		;

	for (idx = len - 1; idx >= 0; idx--)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		if (b[idx] == '1')
			num += k;

		k *= 2;
	}
	return (num);
}
