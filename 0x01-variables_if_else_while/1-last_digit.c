#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Print the last digit on a number and compare it to other numbers
 * Return: Always 0 (Success)
 */

int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	if (l < 0 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	return (0);
}
