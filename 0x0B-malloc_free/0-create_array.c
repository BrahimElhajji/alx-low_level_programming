#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: the memory size
 * @c: character
 * Return: ptr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (0);

	ptr = malloc(size * sizeof(char));

	if (ptr == 0)
		return (0);

	else
		for (i = 0; i < size; i++)
			ptr[i] = c;

	return (ptr);
}
