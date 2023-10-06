#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */

int main(void)
{
	char alpha = 'a', cap = 'A';

	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
	while (cap <= 'Z')
	{
	putchar (cap);
	cap++;
	}
	putchar('\n');
	return (0);
}
