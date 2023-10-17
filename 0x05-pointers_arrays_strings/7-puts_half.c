#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i, c, h;

	c = 0;
	for (i = 0; str[i] != '\0'; i++)
		c++;
	h = c / 2;
	for (i = h; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
