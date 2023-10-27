#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *e;

	while (--argc)
	{
		for (e = argv[argc]; *e; e++)
		if (*e < 48 || *e > 57)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
