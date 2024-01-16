#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: is the string
 * @accept: is the bytes
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, c;

	for (i = 0; s[i] != '\0'; i++)
		for (c = 0; s[i] != accept[c]; c++)
		{
			if (accept[c] == '\0')
				return (i);
		}
	return (0);
}
