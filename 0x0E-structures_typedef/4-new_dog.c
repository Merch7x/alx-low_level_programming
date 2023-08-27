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

	if (owner == NULL || name == NULL || age < 0)
	{
		return (NULL);
	}
	dog1 = malloc(sizeof(dog_t));

	if (dog1 == NULL)
	{
		return (NULL);
	}

	dog1->name = malloc(sizeof(char) * strlen(name) + 1);

	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (dog1->owner  == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	dog1->name = strcpy(dog1->name, name);
	dog1->age = age;
	dog1->owner = strcpy(dog1->owner, owner);
	return (dog1);
}
