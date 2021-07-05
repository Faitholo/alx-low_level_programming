#include "holberton.h"

/**
 * *_strchr - main function.
 * @s: Pointer to the string.
 * @c: Character to locate in the string.
 *
 * Description: This function locates a character in a string.
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (!c ? s : NULL);
}
