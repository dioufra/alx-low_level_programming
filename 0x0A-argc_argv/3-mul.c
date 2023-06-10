#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all argument it receives
 *
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: Always 0 (on success)
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	return (atoi(argv[1]) * atoi(argv[2]));
}
