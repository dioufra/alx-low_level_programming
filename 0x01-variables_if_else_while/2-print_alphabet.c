#include <stdio.h>

/**
 * main - Prints the alphabet
 * Description: This program prints the alphabet in lowercase letters
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
