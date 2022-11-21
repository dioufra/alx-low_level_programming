#include <stdio.h>

/**
 * main - prints the sum of even-valued terms of the first 30 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long prevNum1 = 1, prevNum2 = 2, nextNum;
	unsigned long sum = 2;
	int counter = 0;

	for (counter = 2; counter <= 30; counter++)
	{
		nextNum = prevNum1 + prevNum2;
		if (nextNum % 2 == 0)
			sum += nextNum;
		prevNum1 = prevNum2;
		prevNum2 = nextNum;
	}
	printf("%lu\n", sum);
	return (0);
}
