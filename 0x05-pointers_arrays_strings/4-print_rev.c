#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * @s: the string
 */
void print_rev(char *s)
{
	int i, c;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
		c++;
	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
