#include "search_algos.h"

/**
 * print_array - prints the array being searched
 * @array: elmets to be printed
 * @start: beginning of array
 * @end: end of array
 * @size: size of the array
 * Return: nothing
*/
void print_array(int *array, int start, int end, size_t size)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = start; i <= end && i < (int)size; i++)
	{
		printf("%d", array[i]);
		if (i < end && i < (int)size - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array
 * @array: sorted array
 * @size: size of the array
 * @value: key to look for
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int flag = -1;
	int low = 0;
	int high = size - 1;
	int mid = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (low + high) / 2;
		print_array(array, low, high, size);
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

