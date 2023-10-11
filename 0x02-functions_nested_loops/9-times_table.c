#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int n, c, l;

	for (n = 0; n < 10; n++)
	{
		for (c = 1; c < 10; c++)
		{
			l = n * c;
			_putchar(',');
			_putchar(' ');

		if (l <= 9)
			_putchar(' ');
		else
			_putchar(l / 10 + '0');
		_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}


