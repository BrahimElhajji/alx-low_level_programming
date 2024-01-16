#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: the destination of the string
 * @src: the source of the string
 * @n: the number of elements to print
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c, c1;

	c = 0;
	c1 = 0;
	for (i = 0; dest[i] != '\0'; i++)
		c++;
	for (i = 0; src[i] != '\0'; i++)
		c1++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	return (dest);
}
