#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: arguments count
 * @argv: pointer to the array of arguments
 * Return: 0 on success, and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
