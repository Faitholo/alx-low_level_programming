#include "holberton.h"

/**
 * array_range - Funtion that create an array of integers
 *
 * @min: minimum value
 * @max: mavimum value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptn, i;

	if (min > max)
		return (NULL);

	ptn = malloc(sizeof(int) * (max - min + 1));

	if (!ptn)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		ptn[i] = min + i;
	return (ptn);

}
