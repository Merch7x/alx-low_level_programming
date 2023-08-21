#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free allocated memory
 * @d: pointer to struct dog_t
 * Return: No return value
 */
void free_dog(dog_t *d)
{
	free(d);
}
