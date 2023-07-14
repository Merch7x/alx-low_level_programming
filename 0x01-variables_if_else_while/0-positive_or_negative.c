#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate a random int
 * Return: returns an integer value
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%u is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%u is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
