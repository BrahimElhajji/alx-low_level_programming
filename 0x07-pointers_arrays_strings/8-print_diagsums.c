#include "main.h"

/**
 * print_diagsums - function that prints the sum
 * @a: an array
 * @size: size of arrays
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i < (size * size - 1); i += size - 1)
		sum2 += a[i];
	a += size;
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
