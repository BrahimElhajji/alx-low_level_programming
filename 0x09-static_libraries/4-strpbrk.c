#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the string
 * @accept: string of bytes
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	const char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (0);
}
