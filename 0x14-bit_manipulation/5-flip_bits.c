#include "main.h"

/**
 * flip_bits - determine how many bits to flip to get from one num to another
 *
 * @n: number1
 * @m: number2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int diff;

	diff = n ^ m;

	while (diff > 0)
	{
		flip += (diff & 1);
		diff >>= 1;
	}

	return (flip);
}
