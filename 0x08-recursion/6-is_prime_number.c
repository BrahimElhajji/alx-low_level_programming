#include "main.h"

/**
 * _prime_number - the functions helper
 * @b: first int
 * @a: second int
 * Return: _prime_number(b, a + 1)
 */

int _prime_number(int b, int a)
{
	if (a >= b && b >= 2)
		return (1);

	else if (b % a == 0 || b < 2)
		return (0);

	return (_prime_number(b, a + 1));
}

/**
 * is_prime_number - function that returns 1 if the integer is a prime number
 * @n: int
 * Return: _prime_number(n, 2)
 */

int is_prime_number(int n)
{
	return (_prime_number(n, 2));

}
