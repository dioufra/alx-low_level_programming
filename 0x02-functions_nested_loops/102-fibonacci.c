#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long prevNum1 = 1, prevNum2 = 2, nextNum;
	int counter = 0;

	for (counter = 2; counter <= 49; counter++)
	{
		nextNum = prevNum1 + prevNum2;
		printf("%lu", nextNum);
		if (counter == 49)
			putchar('\n');
		else
			printf(", ");
		prevNum1 = prevNum2;
		prevNum2 = nextNum;
	}
	return (0);
}
