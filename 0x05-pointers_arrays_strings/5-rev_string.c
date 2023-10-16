#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		for (i = 0; *s > 0; i--)
			_putchar(s[i]);
	_putchar('\n');
}
