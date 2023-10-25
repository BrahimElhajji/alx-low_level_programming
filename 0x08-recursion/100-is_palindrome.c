#include "main.h"

/**
 * _string_length - function for the string lenght
 * @s: the string
 * Return: 1 + _string_length(s + 1)
 */

int _string_length(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _string_length(s + 1));
}

/**
 * compare_letters - function that compaers string compare_letters
 * @s: the string
 * @l: letters to the left
 * @r: letters to the right
 * Return: 0 + compare_letters(s, l + 1, r - 1)
 */

int compare_letters(char *s, int l, int r)
{
	if (*(s + l) == *(s + r))
	{
		if (l == r || l == r + 1)
			return (1);
		return (0 + compare_letters(s, l + 1, r - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if string is palindrome and 0 if no
 * @s: the string
 * Return: compare_letters(s, 0, _string_length(s) - 1)
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (compare_letters(s, 0, _string_length(s) - 1));
}
