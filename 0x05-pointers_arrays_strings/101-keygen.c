#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: Always 0
 */
int main(void)
{
	int i;
	int v = 0xad4;

	srand(time(NULL));
	while (v > '~')
	{
		i = rand() % 127;
		if (i >= 32 && v - i >= 32)
		{
			putchar(i);
			v = v - i;
		}
	}
	putchar(v);
	return (0);
}
