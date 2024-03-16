#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * @array: sorted array
 * @size: size of the array
 * @value: value to search for
 * Return: -1 if not found, index of value if found
 */
int jump_search(int *array, size_t size, int value)
{
int flag = -1;
int jump_factor = (int)sqrt(size);
int low = 0, high = jump_factor;
int i = 0;

if (array == NULL || size == 0)
{
	return (-1);
}

while (high < (int)size && array[high] < value)
{
	printf("Value checked array[%d] = [%d]\n", high, array[high]);
	low = high;
	high += jump_factor;
}

printf("Value found between indexes [%d] and [%d]\n", low, high);
for (i = low; i <= high && i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
{
	flag = i;
	break;
}
}

return (flag);
}

