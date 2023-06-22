#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints a string followed by a new line
 *
 * @separator: string to be printed between the strings
 * @n: number of string passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ap;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		s = va_arg(ap, char *);

		if (if == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
