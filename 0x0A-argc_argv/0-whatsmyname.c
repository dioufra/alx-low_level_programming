#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of arguments
 * @argv: pointer to an array of character string
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
