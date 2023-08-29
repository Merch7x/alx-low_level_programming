#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to be allocated
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *size;

	size = malloc(b);

	if (size == NULL)
	{
		exit(98);
	}
	return (size);
}
