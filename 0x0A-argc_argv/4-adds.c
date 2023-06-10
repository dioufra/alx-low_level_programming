#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the addition of positive numbers
 *
 * @argc: number of command line arguments
 * @argv: array containing the command line arguments
 *
 * Return: Always 0 (on success)
 */

int main(int argc, char **argv)
{
    int res, i;

    for (i = 1; i < argc; i++)
    {
	    char *arg = argv[i];

	    for (j = 0; arg[j]; j++)
	    {
		    if (arg[j] < '0' || arg[j] > '9')
		    {
			    printf("Error\n");
			    return (1);
		    }
	    }
	    res += atoi(arg);
    }
    printf("%d\n", res);
    return (0);
}
