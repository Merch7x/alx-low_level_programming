#include <stdio.h>
#include "main.h"
/**
 * print_array - prints arrays to stdout
 * @a: parameter pointer
 * @n: integer value
 * Return: nothing to return
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;

		if (i < n)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");
}

