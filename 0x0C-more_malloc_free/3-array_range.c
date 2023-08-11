#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: values to intialize
 * @max: value to intialize
 * Return: an int pointer
 */
int *array_range(int min, int max)
{
	int *array, i = 0, len = 0;

	len = max - min;
	array = malloc(sizeof(int) * len);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = array[min]; i <= array[max]; i++)
	{
		if (min > max)
		{
			return (NULL);
		}
	}
	return (array);
	free(array);
}

