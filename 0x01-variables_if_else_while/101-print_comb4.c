#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int n, n1, n2;

	for (n = '0'; n <= '9'; n++)
	{
	for (n1 = n + 1; n1 <= '9'; n1++)
	{
	for (n2 = n1 + 1; n2 <= '9'; n2++)
	{
	putchar(n);
	putchar(n1);
	putchar(n2);
	if (n + n1 + n2 != '9' + '8' + '7')
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
