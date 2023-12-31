#include <stdio.h>
/**
 * print_diagsums - prints the sum of a diagonal
 * @a: 2d array pointer
 * @size: size of array
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diag1, diag2);
}

