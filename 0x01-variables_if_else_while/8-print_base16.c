#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = '0', Hex = 'a';

	while (n <= '9')
	{
	putchar(n);
	n++;
	}
	while (Hex <= 'f')
	{
	putchar(Hex);
	Hex++;
	}
	putchar('\n');
	return (0);
}
