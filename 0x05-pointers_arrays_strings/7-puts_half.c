#include "holberton.h"

/**
 * puts_half - main function.
 * @str: Pointer, the string of numbers to print.
 *
 * Description: This function prints half of a string.
 *
 * Return: none.
 */

void puts_half(char *str)
{
	int n;
	int i;

	while (str[n])
	{
		n++;
	}

	if (n % 2 == 1)
	{
		i = (n - 1) / 2;
		i = n - i;
	}

	else
	{
		i = n / 2;
	}

	for (; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
