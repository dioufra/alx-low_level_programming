#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments followed by a newline
 *
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: Always 0 (on success)
 */

int main(int argc, char **argv)
{
    int i;

    for (i = 0; i < argc; i++)
        printf("%c\n", argv[i])
	return (0);
}


