#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int n, c, l;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');
		for (c = 1; c < 10; c++)
		{
			_putchar(',');
			_putchar(' ');
			l = n * c;
		if (l <= 9)
			_putchar(' ');
		else
			_putchar(l / 10 + '0');
		_putchar(l % 10 + '0');
		}
		_putchar('\n');
	}
}


