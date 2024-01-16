#include "main.h"
/**
 * _isdigit - function that checks for a digit
 *
 * @c: is the digit
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		c++;
		return (1);
	}
	else
		return (0);
}
