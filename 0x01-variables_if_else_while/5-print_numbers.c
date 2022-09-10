#include <stdio.h>

/**
 * main - Print digits
 * Description: Print all single digit numbers of base 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}
	putchar('\n');
	return (0);
}
