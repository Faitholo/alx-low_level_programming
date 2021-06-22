#include "holberton.h"

/**
 * _abs - checks number
 * @r: entero recibo por main.
 * Return: Devuelve r cuando es valor absoluto positivo,
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
}
