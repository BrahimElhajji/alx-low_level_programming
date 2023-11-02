#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: an unsigned integer
 * @size: second unsigned integer
 * Return: memsize
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memsize;

	if (nmemb == 0 || size == 0)
		return (0);

	memsize = (char *)malloc(nmemb * size);

	if (memsize == 0)
		return (0);

	for (i = 0; i < nmemb * size; i++)
		memsize[i] = 0;

	return (memsize);
}
