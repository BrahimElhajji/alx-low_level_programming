#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 *
 * @c: is the character
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 &&  c <= 90)
	{
		c++;
		return (1);
	}
	else
	{
		return (0);
	}
}
