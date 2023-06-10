#include <stdlib.io>
#include <stdio.h>

/**
 * main - prints the number of arguments followed by a newline
 *
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: Always 0 (on success)
 */

int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}


