#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @s: the string
 * Return: s
 */
char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i, l;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (l = 0; l <= 9; l++)
		{
			if (s[i] == a[l])
			{
				s[i] = n[l];
			}
		}
	}
	return (s);
}
