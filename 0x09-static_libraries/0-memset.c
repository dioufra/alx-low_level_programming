#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory are
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;

	while (count
