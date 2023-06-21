#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function given as parameter on each array
 * element
 *
 * @array: array of integers
 * @size: size of the array
 * @action: function to execute
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
