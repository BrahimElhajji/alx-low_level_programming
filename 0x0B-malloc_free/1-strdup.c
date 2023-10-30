#include "main.h"

/**
 * _strdup - function that returns pointer to a newly allocated space in memory
 * @str: the string
 * Return: cp
 */

char *_strdup(char *str)
{
	int i, c;
	char *cp;

	if (str == 0)
		return (0);

	for (c = 0; str[c] != '\0'; c++)

	cp = malloc(c * sizeof(*str) + 1);

	if (cp == 0)
		return (0);
	else
	{
		for (i = 0; i < c; i++)
			cp[i] = str[i];
	}
	return (cp);
}
