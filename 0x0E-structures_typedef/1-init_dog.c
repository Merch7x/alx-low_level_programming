#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - intitialise a struct
 * @d: name of new struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: onwer of the dog
 * Return: no return value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit (EXIT_FAILURE);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
