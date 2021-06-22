#include "holberton.h"

/**
 * print_last_digit - checks number
 * @j: entero recibo por main.
 * Return: Devuelve r cuando es valor absoluto positivo,
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
