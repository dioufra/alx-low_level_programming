#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: SUCCESS - a pointer to the newly created array.
 *	   Otherwise (min > max or malloc fails) - NULL
 */

int *array_range(int min, int max)
{
	int *ar, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ar = malloc(sizeof(int) * size);

	if (!ar)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = min++;

	return (ar);
}
