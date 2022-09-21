#include "main.h"

/**
 * swap_int -function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int a_f = *a;
	*a = *b;
	*b = a_f;
}
