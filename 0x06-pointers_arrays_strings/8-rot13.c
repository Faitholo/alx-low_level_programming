#include "holberton.h"
/**
 * rot13 - check the code for Holberton School students.
 *@n: the variable
 *Return: n variable
 */
char *rot13(char *n)
{
	int c, j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; n[c] != '\0'; c++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (n[c] == alp[j])
			{
				n[c] = rot[j];
				break;
			}
		}
	}

	return (n);
}
