#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */

int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
	if (abc != 'q' && abc != 'e')
	{
	putchar(abc);
	}
	abc++;
	}
	putchar('\n');
	return (0);
}
