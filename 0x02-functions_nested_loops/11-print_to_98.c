#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - outs to numbers to stdout
 * @n: a parameter of type int
 * Return: no return value
 */
void print_to_98(int n)
{
	int a = n, b = 98;

	if (a <= b)
	{
		while (a <= b)
		{
			printf("%d", a);
			a++;

			if (a <= b)
			{
				printf(", ");
			}
		}
	}

	else if (a > b)
	{
		while (a >= b)
		{
			printf("%d", a);
			a--;

			if (a >= b)
			{
				printf(", ");
			}
		}
	}

	printf("\n");


}


