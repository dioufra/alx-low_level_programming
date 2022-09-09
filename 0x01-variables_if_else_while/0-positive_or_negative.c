#include <stdlib.h>

#include <time.h>

/**
 * main - Prints is number is positive, negative or zero
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* n is greater than 0 */
	if (n > 0)
       	{
		printf("%d is positive\n", n);
	}

	/* n is equal to 0 */
	if (n == 0)
       	{
		printf("%d is zero\n", n);
	}

	/* n is less than 0 */
	if (n < 0) 
	{
		printf("%d is negative\n", n);
	}

	return (0);

}
