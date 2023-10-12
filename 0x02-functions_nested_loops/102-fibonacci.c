#include "main.h"
/**
 * main - Entery point
 *
 * Return: Always 0
 */

int main(void)
{
	int c;
	unsigned long fb = 0, fb1 = 1, sum;

	for (c = 0; c < 50; n++)
	{
		sum = fb + fb1;
		printf("%lu", sum);

		fb = fb1;
		fb1 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

