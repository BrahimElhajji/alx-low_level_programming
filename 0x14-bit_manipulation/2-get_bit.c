#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: n >> index & 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
