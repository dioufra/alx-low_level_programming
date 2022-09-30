#include <stdio.h>

/**
 * maim - programm that print all arguments it receives.
 * @argc: number of arguments
 * @argv: pointer to the array of arguments
 * Retrun: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

