#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the first character of the string
 *
 * Return: the parsed integer
 */
int _atoi(char *s)
{
	int negSigns = 1, num = 0, isDigit = 0, len, i, j;

	for (len = 0; s[len]; len++)
		;
	for (i = 0; i < len; i++)
	{
		if (s[i] == '-' && isDigit != 1)
			negSigns++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			isDigit = 1;
			for (j = i; j < len; j++)
			{
				if (s[j] >= '0' && s[j] <= '9')
				{
					num = 10 * num + (s[j] - '0');
				}
				else
					break;
			}
			break;
		}
	}
	if (negSigns % 2)
		return (num);
	return (-num);
}
