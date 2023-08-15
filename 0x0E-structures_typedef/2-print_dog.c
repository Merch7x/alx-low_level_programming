#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the struct dog
 * @d: struct to be printed
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else if (d == NULL)
	{
		exit(0);
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
