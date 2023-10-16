#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i, c, p;

	c = 0;
	for (i = 0; s[i] != '\0'; i++)
		c++;
	for (i = 0; i < c / 2; i++)
	{
		p = s[i];
		s[i] = s[c - 1 - i];
		s[c - 1 - i] = p;

	}
}
