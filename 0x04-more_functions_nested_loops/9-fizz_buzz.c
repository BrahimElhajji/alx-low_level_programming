#include "main.h"

/**
 * main - Entery point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);
		printf(" ");
	}
	printf("\n");
	return (0);
}
