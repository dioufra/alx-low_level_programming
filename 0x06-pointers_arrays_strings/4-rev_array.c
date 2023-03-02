#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int tmp, start = 0;
	int stop = n - 1;

	while (start < stop)
	{
		tmp = *(a + start);
		*(a + start) = *(a + stop);
		*(a + stop) = tmp;
		start++, stop--;
	}
}
