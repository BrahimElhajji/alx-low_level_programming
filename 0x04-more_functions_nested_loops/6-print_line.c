#include "main.h"
/**
 * print_line - function that draws a straight line in the termina
 *
 * @n: is the number of times the character should be printed
 */

void print_line(int n)
{
	int i;

	i = 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (i <= n)
	{
		i++;
		_putchar('_');
		_putchar('\n');
	}
}
