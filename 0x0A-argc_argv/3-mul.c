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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
