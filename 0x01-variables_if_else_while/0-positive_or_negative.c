#include <stdlib.h>

#include <time.h>

/**
 * main - This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* n is greater than 0 */
	if (n > 0) {
		printf("is positive");
	}

	/* n is equal to 0 */
	if (n == 0) {
		printf("is zero");
	}

	/* n is less than 0 */
	if (n < 0) {
		printf("is negative");
	}

	return (0);

}
