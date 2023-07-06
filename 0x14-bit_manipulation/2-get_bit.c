#include "main.h"

/**
 * get_bit - functions that returns the value of a bit a given index
 *
 * @n: number
 * @index: index within binary number
 *
 * Return: the value of the bit at index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max;

	max = (sizeof(unsigned long int) * 8);
	if (index > max)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
