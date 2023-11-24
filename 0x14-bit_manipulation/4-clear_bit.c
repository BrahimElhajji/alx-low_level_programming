#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (*n & 1l << index)
		*n ^= 1L << index;

	return (1);
}
