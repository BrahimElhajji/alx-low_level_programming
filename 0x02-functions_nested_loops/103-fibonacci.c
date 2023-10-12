#include "main.h"
/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long f = 0, f1 = 1, s;
	float ts;

		while (1)
		{
			s = f + f1;

			if (s > 4000000)
				break;

			if ((s % 2) == 0)
				ts += s;
			f = f1;
			f1 = s;
		}
	printf("%.0f\n", ts);
	return (0);
}
