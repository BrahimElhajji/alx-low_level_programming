#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0, nb;
	char *op = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (; i < nb; i++)
	{
		printf("%02x", op[i] & 0xFF);
		if (i != nb - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
