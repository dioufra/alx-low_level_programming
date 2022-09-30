#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies to integers.
 * @argc: arguments count
 * @argv: pointer to the array of arguments
 * Return: 0 on success otherwise, return 1
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);
		printf("%d\n", result);

		return (0);
	}

	printf("Error\n");
	return (1);
}
