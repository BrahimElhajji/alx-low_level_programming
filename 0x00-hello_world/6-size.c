#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char:%lubyte(s)\n", sizeof(char));
	printf("Size of an int:%lubyte(s)\n", sizeof(int));
	printf("Size of a long int:%lubyte(s)\n", sizeof(long int));
	printf("Size of a long long int:%lubyte(s)\n", sizeof(long long int));
	printf("Size of a float:%lubyte(s)\n", sizeof(float));
	return (0);
}
