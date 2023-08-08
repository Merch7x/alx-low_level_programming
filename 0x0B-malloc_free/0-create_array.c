#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to intialize
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *my_array;

	my_array = malloc(sizeof(char) * size);

	if (size == 0 || my_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		my_array[i] = c;
	}
	return (my_array);
	free(my_array);
}
