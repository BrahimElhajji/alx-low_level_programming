#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	int n, Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit = n % 10;
	if (Last_digit > 5)
	{
	printf("last of digit %d  is %d  greater than 5\n", n, Last_digit);
	}
	else if (Last_digit == 0)
	{
	printf("last of digit %d  is %d  is 0\n", n, Last_digit);
	}
	else
	{
	printf("last of digit %d is %d less than 6 and not 0\n", n, Last_digit);
	}

	return (0);
}
