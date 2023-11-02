#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @n: an unsigned integer
 * @s1: first pointer
 * @s2: second pointer
 * Return: totallength
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, i1 = 0, j = 0, l = 0;
	char *totallength;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[i1] != '\0')
		i1++;

	while (s2[i] != '\0')
		i++;

	if (n >= i)
		n = i;

	totallength = (char *)malloc(i1 + n + 1);

	if (totallength == 0)
		return (0);

	for (; l < i1; l++)
		totallength[l] = s1[l];

	for (; j < n; j++)
		totallength[i1 + j] = s2[j];

	totallength[i1 + n] = '\0';

	return (totallength);
}
