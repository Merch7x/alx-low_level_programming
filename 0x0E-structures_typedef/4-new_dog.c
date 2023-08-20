#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - calculates the lenth of a string
 * @s: pointer of char type
 * Return: an integer value
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}
/**
 * _strcpy - copy one param to another
 * @dest: destination parameter to copy to
 * @src: source parameter
 * Return: char value
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
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

	if (owner == NULL || name == NULL || age < 0)
	{
		return (NULL);
	}
	dog1 = malloc(sizeof(dog1));

	if (dog1 == NULL)
	{
		return (NULL);
	}
	dog1->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}

	_strcpy(dog1->name, name);
	dog1->age = age;
	_strcpy(dog1->owner, owner);

	free(dog1->name);
	free(dog1->owner);
	return (dog1);
	free(dog1);
}
