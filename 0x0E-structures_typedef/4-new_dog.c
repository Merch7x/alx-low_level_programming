#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates anew dog entry
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *dog;

	dog = malloc(sizeof(struct dog_t));
	
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->owner = owner;
	dog->age = age;
	return (dog);
}
