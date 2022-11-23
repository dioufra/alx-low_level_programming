#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: modified string
 */
int _atoi(char *s)
{
	int c = 0, n = 0, sign = 0, i = 0;
	int len, digit;

	for (i = 0; s[i]; i++)
		;

	len = i;

	for (i = 0; i < len; i++)
	{
		digit = s[i] - '0';
		if (s[i] == '-')
			sign++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			c = 1;
			if (sign % 2 != 0)
				digit = -digit;
			n = 10 * n + digit;
		}
		else if ((s[i] < '0' || s[i] > '9') && c == 1)
			break;
	}
	return (n);
}
