#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: an unsigned integer
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
