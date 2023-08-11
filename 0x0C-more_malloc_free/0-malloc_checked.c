#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to be allocated
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *size;

	size = malloc(sizeof(*size) * b);

	if (size == NULL)
	{
		free(size);
		exit(98);
	}
	return (size);
	free(size);
}
