#include "holberton.h"

/**
*_strcat - Funtion that concatenate 2 string
*
*@dest: string 1 
*@src: string 2 
*Return: Both Strings
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; dest[i]; i++)
	;
	while (*src)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);

}
