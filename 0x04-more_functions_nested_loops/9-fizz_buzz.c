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
		if ((n % 3 == 0) && (n % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (n % 3 == 0 && !(n % 5 == 0))
			printf("%s", "Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("%s", "buzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
