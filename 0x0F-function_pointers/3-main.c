#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: Always
 */

int main(int argc, char *argv[])
{
	int a, b, (*operation_fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operation_fun = get_op_func(argv[2]);

	if (operation_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation_fun(a, b));
	return (0);
}
