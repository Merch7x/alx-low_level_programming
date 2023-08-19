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
	    if (d == NULL)
    {
        printf("Invalid pointer to struct dog.\n");
        return;
    }

    printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
