#include <stdio.h>

/**
 * main - prints digits
 * Description: print all single digits of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
