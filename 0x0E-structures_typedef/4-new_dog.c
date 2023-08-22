#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates anew dog entry
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: struct elememt
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *name_copy, *owner_copy;

	if (owner == NULL || name == NULL || age < 0)
	{
		return (NULL);
	}
	dog1 = malloc(sizeof(dog1));

	if (dog1 == NULL)
	{
		return (NULL);
	}

	name_copy = strdup(name);

	if (name_copy == NULL)
	{
		free(name_copy);
		return (NULL);
	}
	owner_copy = strdup(owner);

	if (owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}
	dog1->name = name_copy;
	dog1->age = age;
	dog1->owner = owner;
	return (dog1);
}
