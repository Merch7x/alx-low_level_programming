#include "search_algos.h"
/**
 * linear_search  - searches for a value in an array of integers
 * @array: an array of integers
 * @size: size of the array
 * @value: key to look for
 * Return: the index at which the value was found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int flag = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			flag = i;
			break;
		}
		else
		{
			flag = -1;
		}
	}
	return (flag);
}
