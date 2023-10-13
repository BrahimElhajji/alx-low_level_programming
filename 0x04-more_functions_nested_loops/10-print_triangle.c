#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: is the size of the square
 */
void print_triangle(int size)
{
	int s, r;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = 1; s <= size; s++)
			{
				if ((r + s) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
		_putchar('\n');
		}
	}
}
