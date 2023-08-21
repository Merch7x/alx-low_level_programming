#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array to search from
 * @size: number of elements in the array
 * @cmp: pfn
 * Return: index of first cmp failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
		int i, x;

	if (array && size > 0 && cmp)
	{
		x = 0;
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x == 1)
				return (i);
		}
		return (-1);
	}
	return (-1);
}

