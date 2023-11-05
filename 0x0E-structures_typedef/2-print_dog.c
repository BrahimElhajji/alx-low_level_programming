#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  function that prints a struct dog
 * @d: pointer to the dog informations
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name != 0) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", (d->owner != 0) ? d->owner : "(nil)");
	}
}
