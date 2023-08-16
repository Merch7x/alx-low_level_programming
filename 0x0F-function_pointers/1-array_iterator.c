#include <stddef.h>
/**
 * array_iterator - excutes a pfn on an array
 * @array: array
 * @size: size of the array
 * @action: pfn
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
