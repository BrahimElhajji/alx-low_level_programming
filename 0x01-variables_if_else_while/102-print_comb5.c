#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int n, n1;

	for (n = 0; n <= 99; n++)
	{
		for (n1 = 0; n1 <= 99; n1++)
		{
			if (n != n1)
			{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			if (n != 99 || n1 != 99)
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
