#include "holberton.h"

/**
 * print_rev - main function.
 * @s: Pointer, the string to print.
 *
 * Description: This function prints a string in reverse.
 *
 * Return: none.
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}

	count--;

	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}

	_putchar('\n');
}
