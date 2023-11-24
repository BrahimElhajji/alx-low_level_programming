#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: unsigned long int
 * @m: second insigned long int
 * Return: c
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int c = 0;

	while (xor)
	{
		if (xor & 1ul)
			c++;
		xor = xor >> 1;
	}

	return (c);
}
