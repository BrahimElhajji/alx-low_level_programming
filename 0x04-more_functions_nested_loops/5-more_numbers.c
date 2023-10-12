#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, l;

	for (l = 0; l < 10; l++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + 48);
			}
			_putchar(i % 10 + 48);
		}
		_putchar('\n');
	}
}
