#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - functions that prints numbers followed by a new line
 *
 * @separator: string to print between numbers
 * @n: number of integer passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_list ap;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
