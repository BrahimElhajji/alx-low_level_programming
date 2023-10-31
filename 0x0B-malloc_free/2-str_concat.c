#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: constring
 */

char *str_concat(char *s1, char *s2)
{
	int i, i1, c, l;
	char *constring;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	c = 0;
	while (s1[c] != '\0')
		c++;

	l = 0;
	while (s2[l] != '\0')
		l++;

	constring = (char *)malloc(c + l + 1);

	if (constring == 0)
	{
		return (0);
	}

	for (i = 0; i < c; i++)
	{
		constring[i] = s1[i];
	}

	for (i1 = 0; i1 < l; i1++)
	{
		constring[i + i1] = s2[i1];
	}
	constring[i + i1] = '\0';
	return (constring);
}
