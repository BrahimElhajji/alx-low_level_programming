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
		if (i > 0 && (format[i] == 'c' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (!string)
				{
					printf("(nil)");
					break;
				}
					printf("%s", string);
					break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
