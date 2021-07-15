#include "holberton.h"

/**
 * string_nconcat - Funtion
 *
 * @s1: String 1
 * @s2: String 2
 * @n: n bytes of s2
 *
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pnt = NULL;
	unsigned int size1, size2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (size1 = 0; s1[size1]; size1++)
	;

	for (size2 = 0; s2[size2]; size2++)
	;
	if (n >= size2)
		n = size2;
	pnt = malloc(sizeof(char) * (n + size1 + 1));
	if (!pnt)
	{
		return (NULL);
	}
	for (size1 = 0; s1[size1]; size1++)
		pnt[size1] = s1[size1];

	for (size2 = 0; size2 < n; size2++)
		pnt[size1 + size2] = s2[size2];

	pnt[size1 + n] = '\0';
	return (pnt);

}
