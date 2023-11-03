#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: a pointer
 * @old_size: unsigned integer
 * @new_size: second unsigned integer
 * Return: arraymem
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *np;

	np = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	if (ptr == 0)
	{
		if (np == 0)
			return (0);
		return (np);
	}

	if (new_size > old_size)
	{
		if (np == 0)
			return (0);

		for (i = 0; i < new_size && i < old_size; i++)
		((char *)np)[i] = ((char *)ptr)[i];
		free(ptr);
	}
	return (np);
}
