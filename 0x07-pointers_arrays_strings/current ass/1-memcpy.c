#include "holberton.h"

/**
 * *_memcpy - main function.
 * @dest: Pointer to destination.
 * @src: Pointer to the source.
 * @n: Number of bytes to copy.
 *
 * Description: This function copies memory area.
 *
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
