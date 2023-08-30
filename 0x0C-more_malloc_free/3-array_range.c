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

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[len] = i;
			len++;
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}

