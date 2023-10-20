#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: is the string
 * @n: is the number of elements
 */

void reverse_array(int *a, int n)
{
	int i, s;

	for (i = 0; i < n / 2; i++)
	{
		s = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = s;
	}
}
