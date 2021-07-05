#include "holberton.h"

/**
 * *_strstr - main function.
 * @haystack: Pointer to the string to search.
 * @needle: Pointer to the substring to find.
 *
 * Description: This function locates a substring.
 *
 * Return: A pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (needle[i])
	{
		while (*haystack)
		{
			if (*haystack == needle[i])
			{
				return (haystack);
			}
			haystack++;
		}
		if (needle == 0 || *needle == '\0')
		{
			return (0);
		}
		i++;
	}
	return (NULL);
}
