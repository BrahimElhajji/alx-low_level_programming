#include "lists.h"

void __attribute__((constructor)) bef_main(void);
/**
 * main - function that prints a string before the main function is executed
 */

void bef_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
