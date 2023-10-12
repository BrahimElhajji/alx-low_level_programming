#include "main.h"
/**
 * print_numbers - function that prints the numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
