#include <stdio.h>
/**
 * binary_search - fun that searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
        int high = size - 1;
        size_t i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{

		int mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = 0; i < size; ++i)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
