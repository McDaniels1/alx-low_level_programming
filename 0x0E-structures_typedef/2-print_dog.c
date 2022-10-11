#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - this rints all the date of a dog
 * @d: Adog structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(ni1)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(ni1)");
	}
}
