#include "main.h"

/**
 * main - Entery point
 *
 * print_alphabet - is for  the _putchar to print the alphabet
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
