#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: an integer
 * @av: pointer to pointer
 * Return: output
 */

char *argstostr(int ac, char **av)
{
	int i, tl = 0, argl = 0, outputin = 0;
	char *output;

	if (ac <= 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		argl = 0;
		while (av[i][argl] != '\0')
			argl++;

		tl += argl + 1;
	}

	output = (char *)malloc(tl + 1);

	if (output == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		argl = 0;
		while (av[i][argl] != '\0')
		{
			output[outputin] = av[i][argl];
			outputin++;
			argl++;
		}
		output[outputin] = '\n';
		outputin++;
	}

	output[outputin] = '\0';
	return (output);
}
