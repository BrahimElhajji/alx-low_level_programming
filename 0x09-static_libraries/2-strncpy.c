#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: the destination of the string
 * @src: the source of the string
 * @n: the numbers of elements to print
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, c, c1;

	c = 0;
	c1 = 0;
	for (i = 0; dest[i] != '\0'; i++)
		c++;
	for (i = 0; src[i] != '\0'; i++)
		c1++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
