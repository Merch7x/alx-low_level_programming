#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - copies an existing string in new memory
 * @str: string copy
 * Return: pointer to newly allocate dspace in memory
 */
char *_strdup(char *str)
{
	int i = 0, len;
	char *new_string;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	len = i + 1;

	new_string = malloc(sizeof(char) * len);

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		new_string[i] = str[i];
	}

	if (sizeof(new_string) != sizeof(str))
	{
		free(new_string);
		return (NULL);
	}
	return (new_string);
	free(new_string);
}
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

	name_copy = _strdup(name);
	owner_copy = _strdup(owner);

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(dog1);
	}

	dog1->name = name_copy;
	dog1->age = age;
	dog1->owner = owner_copy;

	free(dog1->name);
	free(dog1->owner);
	return (dog1);
}
