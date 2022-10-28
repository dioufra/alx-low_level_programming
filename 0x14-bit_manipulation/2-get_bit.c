#include "main.h"

/**
 * get_bit - gets the value of the bit at a given index.
 *
 * @n: number
 * @index: index
 *
 * Return: valueof the bit, or -1 if an error occur
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits_number;

	max_bits_number = malloc(sizeof(unsigned long int) * 8);

	if (index >= max_bits_number)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
