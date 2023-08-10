#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: size of array
 * @size: byte sizes
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = calloc(nmemb, size);
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
	free(array);
}
