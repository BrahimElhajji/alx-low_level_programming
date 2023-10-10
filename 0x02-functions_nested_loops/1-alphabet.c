#include "main.h"

/**
 * main - Entery point
 *
 * _putchar - is the putchar prototype
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
