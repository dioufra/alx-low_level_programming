#include <stdio.h>

/**
 * main - Print alphabet
 * Description: Prints the alphabet in lowercase, then in uppercase followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char u = 'A';
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
