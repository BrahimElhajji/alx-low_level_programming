#include "main.h"
/**
 * print_square -  function that prints a square
 *
 * @size: is the size of the square
 */

void print_square(int size)
{
	int s, r;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = 1; s <= size; s++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
