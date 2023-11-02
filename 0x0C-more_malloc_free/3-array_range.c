#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: first integer
 * @max: second integer
 * Return: arraymem
 */

int *array_range(int min, int max)
{
	int i, elemn;
	int *arraymem;

	if (min > max)
		return (0);

	elemn = max - min + 1;

	arraymem = malloc(elemn * sizeof(int));

	if (arraymem == 0)
		return (0);

	for (i = 0; i < elemn; i++)
		arraymem[i] = min++;

	return (arraymem);
}
