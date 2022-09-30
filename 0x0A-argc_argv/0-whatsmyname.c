#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of arguments
 * @argv: pointer to an array of character string
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s", argv[0]);

	return (0);
}
