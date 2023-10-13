#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n:  is the number of times the character should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, r;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (r = 0; r <= i; r++)
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
