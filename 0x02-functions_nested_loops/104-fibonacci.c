#include "main.h"
/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int max = 4000000;
	int n = 1;
	int n1 = 2;
	int r;
	int s = 2;

	while (r <= max)
	{
		r = n + n1;
		if (r % 2 == 0)
			s = s + r;
		n = n1;
		n1 = r;
	}
	printf("%d\n", s);
	return (0);
}
