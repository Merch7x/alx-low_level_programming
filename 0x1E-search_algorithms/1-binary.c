#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: sorted array
 * @size: size of the array
 * @value: key to look for
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int flag = 0;
	int low = array[0];
	int high = array[size - 1];
	int mid = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (low < high)
	{
		mid = (low + high) / 2;
		printf("Searching in array:  ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
			printf("\n");
		if (value == array[mid])
		{
			flag = mid;
			break;
		} else if (value < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
			flag = -1;
		}
	}
	return (flag);
}

