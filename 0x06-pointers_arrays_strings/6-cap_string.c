#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: the string
 * Return: str
 */
char *cap_string(char *str)
{
	int i, s;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				for (s = 0; s <= 12; s++)
				{
					if (a[s] == str[i - 1])
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}
	}
	return (str);
}
