#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: the character in the string
 * Return: char *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (0);
}
