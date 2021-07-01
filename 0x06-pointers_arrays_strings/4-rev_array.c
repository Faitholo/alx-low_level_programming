#include <stdio.h>
/**
 * reverse_array - writes the character c to stdout
 * @a: The character to print
 * @n: dfsdfsdfsd
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{

	int b = 0, c = 0;
	int d[20];

	n--;
	while (b <= n)
	{
		d[n - b] = a[b];
		b++;

	}
	while (c <= n)
	{
		a[c] = d[c];
		c++;
	}
}
