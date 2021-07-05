#include "holberton.h"

/**
 * _strspn - main function.
 * @s: Pointer to the string.
 * @accept: Pointer to the character to print.
 *
 * Description: This function gets the length of a prefix substring.
 *
 * Return:  the number of bytes in the initial segment of *s which
 * consist only of bytes from *accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, c, p = 0;

	while (s[i])
	{
		for (c = 0; accept[c]; c++)
		{
			if (s[i] == accept[c])
			{
				p++;
			}
		}
		if (p < i)
		{
			break;
		}
		i++;
	}
	return (p);
}
