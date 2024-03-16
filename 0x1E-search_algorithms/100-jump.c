#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * @array: sorted array
 * @size: size of the array
 * @value: value to search for
 * Return: -1 or index of value
 */
int jump_search(int *array, size_t size, int value)
{
	int flag = -1, j = 0, i = 0;
	int jump_factor = (int)sqrt(size);
	int low = 0, high = jump_factor;

	if (array == NULL)
	{
		return (flag);
	}

	for (i = low; i < high && i < (int)size; i += jump_factor)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[low])
		{
			flag = low;
			break;
		} else if (value > array[high])
		{
			low = high;
			high = low + jump_factor;
		}
		else
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			for (j = low; j <= high && j < (int)size; j++)
			{
				printf("Value checked array[%d] = [%d]\n", j, array[j]);
				if (value == array[j])
				{
					flag = j;
					break;
				}
			}
		}
	}
	return (flag);
}
