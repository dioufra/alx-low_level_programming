#include <stdio.h>

/**
 * main - prints the number of arguments passed.
 * @argc: arguments count
 * @argv: pointer to the array of arguments
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
