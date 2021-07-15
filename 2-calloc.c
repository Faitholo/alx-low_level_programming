#include "holberton.h"

/**
 * _calloc - Funtion
 *
 * @nmemb: Elements
 * @size: Lenght
 *
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptn;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptn = malloc(nmemb * size);
	if (!ptn)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptn[i] = 0;
	return (ptn);
}
