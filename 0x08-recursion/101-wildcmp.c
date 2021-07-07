#include "holberton.h"

/**
 * wildcmp - Funtion
 *
 * @s1: Variable
 * @s2: Variable
 *
 * Return: Int
 */
int wildcmp(char *s1, char *s2)
{

	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		if (*(s1 + 1) != '\0' && *s2 == '\0')
			return (0);
	}
	return (0);
}
