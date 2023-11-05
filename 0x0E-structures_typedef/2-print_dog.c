#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  function that prints a struct dog
 * @d: pointer to the dog informations
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *name = d->name ? d->name : "(nil)";
	char *owner = d->owner ? d->owner : "(nil)";

	if (d)
	{
		printf("Name: %s\n", name);
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", owner);
	}
}
