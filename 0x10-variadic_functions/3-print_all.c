#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;
	char *string;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0 && (format[i] == 'f' || format[i] == 'c'
					|| format[i] == 'i' || format[i] == 's'))
		{
			printf(", ");
		}
		if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 's')
		{
			string = va_arg(args, char *);
			printf("%s", (string == NULL) ? "(nil)" : string);
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
