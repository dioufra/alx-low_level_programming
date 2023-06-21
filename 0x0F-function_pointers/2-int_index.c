#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches an integer
 *
 * @array: array of integers
 * @size: number of integers
 * @cmp: pointer to the comparing function
 *
 * Return: the index of the first element for wish comp return
 * a non nil integer, -1 if no match found or size less or equal to 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
