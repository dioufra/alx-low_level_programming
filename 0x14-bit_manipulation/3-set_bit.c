#include "main.h"

/**
 * set_bit - gets the value of the bit at a given index.
 *
 * @n: number
 * @index: index
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m = 1;
	unsigned int max_bits_number;

	max_bits_number = (sizeof(unsigned long int) * 8);

	if (index >= max_bits_number)
		return (-1);

	m <<= index;
	*n = (*n | m);

	return (1);
}
