#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(',');
	putchar(' ');
	putchar(n);
	}
	putchar('\n');
	return (0);
}
