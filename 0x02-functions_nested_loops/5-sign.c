#include "main.h"
/**
 * print_sign - print sign for n
 *
 * @n: is the number
 *
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 48)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
