#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Return: ndp
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lname = 0, lowner = 0;
	dog_t *ndp;

	ndp = malloc(sizeof(dog_t));

	if (ndp == NULL)
		return (NULL);


	while (lname != '\0') 
		lname++;

	while (lowner != '\0')
		lowner++;

	(*ndp).name = malloc(lname + 1);
	(*ndp).owner = malloc(lowner + 1);

	if ((*ndp).name == NULL || (*ndp).owner == NULL) 
	{
		free((*ndp).name);
		free((*ndp).owner);
		free(ndp);
		return NULL;
	}

	for (i = 0; i <= lname; i++) 
	{
		(*ndp).name[i] = name[i];

	}
	for (i = 0; i <= lowner; i++) 
	{
		(*ndp).owner[i] = owner[i];
	}
	(*ndp).age = age;

	return (ndp);
}
