#include "holberton.h"

/**
 * string_toupper - string
 * @s: string
 * Return: return s
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
