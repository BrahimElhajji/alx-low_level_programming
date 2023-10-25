#include "main.h"

/**
 * sqr - the function helper
 * @a: first int
 * @b: second int
 * Return: sqr(a, b + 1)
 */

int sqr(int a, int b)
{
	if (b * b == a)
		return (b);

	else if (b * b < a)
		return (sqr(a, b + 1));

	return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * Return: sqr(n, 1)
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));

}
