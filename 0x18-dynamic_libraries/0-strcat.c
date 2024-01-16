#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: the destionation of the string
 * @src: the source of the string
 * Return: is dest
 */
char *_strcat(char *dest, char *src)
{
	int i, c, n;

	c = 0;
	n = 0;
	for (i = 0; dest[i] != '\0'; i++)
		c++;
	for (i = 0; src[i] != '\0'; i++)
		n++;
	for (i = 0; i <= n; i++)
		dest[c + i] = src[i];
	return (dest);
}
