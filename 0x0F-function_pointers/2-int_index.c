#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: a pointer
 * @size: is the number of elements in the array
 * @cmp: a pointer to the function to compare values
 * Return: i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);

}
