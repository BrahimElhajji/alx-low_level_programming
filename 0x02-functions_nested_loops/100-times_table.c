#include "main.h"
/**
 * print_times_table -  function that prints the n times table, starting with 0
 *
 * @n: is the number
 */

void print_times_table(int n)
{
	int n1, n2, r;

	if (n <= 15 && n >= 0)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
		_putchar('0');
		for (n2 = 1; n2 <= n; n2++)
		{
			_putchar(',');
			_putchar(' ');

			r = n1 * n2;
			if (r <= 9)
				_putchar(' ');
			if (r <= 99)
				_putchar(' ');
			if (r >= 100)
			{
				_putchar(r / 100 + '0');
				_putchar((r / 10) % 10 + '0');
			}
			else if (r <= 99 && r >= 10)
				_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
		}
		_putchar('\n');
		}
	}
}
