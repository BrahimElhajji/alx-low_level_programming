#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: constring
 */

char *str_concat(char *s1, char *s2)
{
	int i, c, l;
	char *constring;

	if (s1 == 0)
		s1 = "\0";

	if (s2 == 0)
		s2 = "\0";

	for (c = 0; s1[c] != '\0'; c++)
		for (l = 0; s2[l] != '\0'; l++)

			constring = malloc(((c + l) * sizeof(char)) + 1);

	if (constring == 0)
		return (0);

	for (i = 0; i <= c + l; i++)
	{
		if (i < c)
			constring[i] = s1[i];

		else
			constring[i] = s2[i - c];
	}

	constring[i] = '\0';
	return (constring);
}
