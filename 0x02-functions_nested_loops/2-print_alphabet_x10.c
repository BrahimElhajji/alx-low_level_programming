#include "main.h"

/**
 * print_alphabet_x10 - the function to print 10 lines of alphabet
 *
 */

void print_alphabet_x10(void)
{
	int ln, ch;

	for (ln = 0; ln < 10; ln++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
