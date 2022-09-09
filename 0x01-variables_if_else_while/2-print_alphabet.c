#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Result: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar("\n");
	return (0);
}
