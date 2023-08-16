#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: araay to search from
 * @size: number of elements in the array
 * @cmp: pfn
 * Return: index of first cmp failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	else if (size <= 0)
	{
		return (-1);
	}
	return (0);
}
