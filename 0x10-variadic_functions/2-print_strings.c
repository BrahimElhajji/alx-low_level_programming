#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (separator == 0)
			printf("(nil)");
		else
			printf("%s", string);

		if ((separator && i < (n - 1)) != 0)
			printf("%s", separator);
	}


	va_end(args);
	printf("\n");
}
