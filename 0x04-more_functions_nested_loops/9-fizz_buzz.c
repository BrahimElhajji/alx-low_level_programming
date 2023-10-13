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
		if ((n == 3) && (n % 3 == 0))
			printf("Fizz");
		else if ((n == 5) && (n % 5 == 0))
			printf("buzz");
		else if ((n == 3 * 5) && (n % 3 == 0 && n % 5 == 0))
			printf("FizzBuzz");
	}
	return (0);
}
