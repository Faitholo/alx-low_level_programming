#include "holberton.h"

/**
 * _isalpha - checks letter
 * @c: caracter recibo por main.
 * Return: 1 if c is lowercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
