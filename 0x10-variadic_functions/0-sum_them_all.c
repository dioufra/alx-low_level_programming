#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function tha sum all it parameters
 *
 * @n: last required parameter
 *
 * Return: the sum of all the parameter, or 0 if n is zero
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum, i;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_list(ap, int);

	return (sum);
}
